#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<double> v(N);
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    double ans=0;
    for(int i=0;i<N;i++){
        ans += v[i]*(i+1)*(N-i);
    }
    printf("%.2lf",ans);
    return 0;
}