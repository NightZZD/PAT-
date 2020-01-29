#include<iostream>
#include<string>
using namespace std;
int main(){
    string A;
    int B;
    int Q=0,R=0;
    int tmp=0;
    cin>>A>>B;
    if(A[0]/B == 0){
        tmp = A[0];
    }else{
        cout<<A[0]/B;
    }
    for(int i=1;i<A.length();i++){       
        tmp =tmp*10+A[i]-'0';
        Q =tmp/B;//quotient
        R =tmp%B;//remainder
        cout<<Q;
    }
    cout<<" "<<R;
    return 0;
}