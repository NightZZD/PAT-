#include<iostream>
#include<map>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int a[128];
    int b[128];
    for(auto it:s1){
        a[it]++;
    }
    int lack=0;
    for(auto it:s2){
        if(a[it]>0){
            a[it]--;
        }else{
            lack++;
        }
    }
    if(lack>0){
        cout<<"No "<<lack;
    }else{
        cout<<"Yes "<<s1.length()-s2.length();
    }


    return 0;
}