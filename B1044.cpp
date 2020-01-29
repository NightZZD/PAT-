#include<string>
#include<iostream>
using namespace std;
string a[] = { " ","tam", "hel","maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };//高位
string b[] = { "tret","jan", "feb","mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };//低位
void f1(string& s) {
    int t = stoi(s);
    if (t / 13) cout << a[t / 13];
    if ((t / 13) && (t % 13)) cout << " ";
    if (t % 13 || t == 0) cout << b[t % 13] ;
}
void f2(string& s) {
    int len = s.length();
    int t1 = 0, t2 = 0;
    string s1 = s.substr(0,3),s2;
    if (len > 4)  s2 = s.substr(4, 3);
    for (int i = 0; i < 13; i++) {
        if (a[i]==s1)t1 = i;
        if (b[i]==s1||b[i]==s2)t2 = i;
    }
    cout << t1 * 13 + t2;
}
int main() {
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n;i++) {
        string s;
        getline(cin, s);
        if (s[0] >= '0' && s[0]<= '9') {
            f1(s);
        }
        else {
            f2(s);
        }
        cout << endl;
    }
    return 0;
}