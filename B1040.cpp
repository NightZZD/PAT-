#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> p;
    vector<int> T;
    int tmp = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'P') {
            p.push_back(++tmp);
        }
        else {
            p.push_back(tmp);
        }
    }
    int tmp2 = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == 'T') {
            T.push_back(++tmp2);
        }
        else{
            T.push_back(tmp2);
        }
    }
    return 0;
}