#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    long long A,B,C,sum;
    int i;
    while(T--){
        scanf("%lld%lld%lld",&A,&B,&C);
        sum = A+B;
        i++;
        if(sum>C){
            printf("Case #%d: true\n",i);
        }else{
            printf("Case #%d: false\n",i);
        }
    }
    return 0;
}