#include<iostream>
#include<map>
using namespace std;
int main() {
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'P' || s[i] == 'A' || s[i] == 'T' || s[i] == 'e' || s[i] == 's' || s[i] == 't') {
            m[s[i]]++;
        }
    }
    int sum;
    for (auto it = m.begin(); it != m.end(); it++) {//c++11 foreach
        sum += it->second;
    }
    while (sum>0) {
        if (m['P']-- > 0) {//m['P']>0;m['P']--;
            cout << 'P';
            sum--;
        }
        if (m['A']-- > 0) {
            cout << 'A';
            m['A']--;
            sum--;
        }
        if (m['T']-- > 0) {
            cout << 'T';
            sum--;
        }
        if (m['e']-- > 0) {
            cout << 'e';
            sum--;
        }
        if (m['s']-- > 0) {
            cout << 's';
            sum--;
        }
        if (m['t']-- > 0) {
            cout << 't';
            sum--;
        }
    }
    return 0;
}