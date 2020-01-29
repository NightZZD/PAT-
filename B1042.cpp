#include<iostream>
#include<string>
#include<ctype.h>
#include<map>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        s[i] = tolower(s[i]);
        m[s[i]]++;
    }
    int maxnum=0;
    for(auto it=m.begin();it!=m.end();it++){
        auto ans=it;
        if(maxnum < it->second){
            maxnum = it->second;
        }
        if(it == (--m.end())){
            cout<<ans->first<<" "<<maxnum;
        }
    }
    return 0;
}