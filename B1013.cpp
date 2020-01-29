#include<stdio.h>
#include<vector>
using namespace std;
bool isPrime(int n){
    if(n<=1)return false;
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
    }
    return true;
}
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    int cnt=0;//计数变量
    vector<int> v;
    for(int i=2;cnt<N;i++){
        if(isPrime(i)){
            cnt++;
            v.push_back(i);
        }
    }
    int pos=0;
    for(int i=M-1;i<N;i++){
        pos++;
        if(pos%10 == 0){
            printf("%d\n",v[i]);
        }else if(i == N-1){
            printf("%d",v[i]);
        }else{
            printf("%d ",v[i]);
        }
    }
    return 0;
}