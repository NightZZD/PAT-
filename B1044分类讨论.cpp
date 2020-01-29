#include<string>
#include<iostream>
using namespace std;
string a[] = { " ","tam", "hel","maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
string b[] = { "tret","jan", "feb","mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
void f1(string& s) {
    int ans = stoi(s);
    int c = ans / 13;
    int d = ans % 13;
    if (ans == 0)cout << b[0];
    else if (c > 0 && d == 0) {
        cout << a[c];
    }
    else if (c == 0 && d > 0) {
        cout << b[d];
    }
    else {
        cout << a[c] << " " << b[d];
    }
}
void f2(string& s) {
    int len = s.length();
    int c = 0, d = 0;
    if (len < 4) {
        string s1 = s.substr(0, 3);
        for (int i = 0; i < 13; i++) {
            if (s1 == a[i]) { c = i; cout << c * 13; }
            if (s1 == b[i]) { d = i; cout << d; }
        }
    }
    else {
        string s1 = s.substr(0, 3);
        string s2 = s.substr(4, 3);
        for (int i = 0; i < 13; i++) {
            if (s1 == a[i])c = i;
            if (s2 == a[i] || s2 == b[i])d = i;
        }
        cout << c * 13 + d;
    }
}
int main() {
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        if (s[0] >= '0' && s[0] <= '9') {
            f1(s);
        }
        else {
            f2(s);
        }
        cout << endl;
    }
    return 0;
}