#include<iostream>
#include<map>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    map<char,int> m1;
    map<char,int> m2;
    for(int i=0;i<s1.length();i++){
        m1[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        m2[s2[i]]++;
    }
    if(m1.size()>m2.size())
    return 0;
}