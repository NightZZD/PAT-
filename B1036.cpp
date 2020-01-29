#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    int half;
    if(n%2==0){
        half = n/2;
    }else{
        half = n/2+1;
    }
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
    for(int i=0;i<half-2;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                cout<<c;
            }else if(j==n-1){
                cout<<c<<endl;
            }else{
                cout<<" ";
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<c;
    }
    return 0;
}