//#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string A,B;
    char DA,DB;
    long long pa =0,pb =0;
    cin>>A>>DA>>B>>DB;
    for(int i=0;i<A.length();i++){
        if(A[i] == DA){
            pa = pa*10 + DA-'0'; 
        }
    }
    for(int i=0;i<B.length();i++){
        if(B[i] == DB){
            pb = pb*10 + DB-'0'; 
        }
    }
    printf("%lld",pa+pb);
    return 0;
}