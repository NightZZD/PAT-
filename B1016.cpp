#include<stdio.h>
int main(){
    long long A,B;
    int DA,DB;
    long long pa=0,pb=0;
    scanf("%lld%d%lld%d",&A,&DA,&B,&DB);
    while(A!=0){
        if(A%10==DA){
            pa =pa*10 +DA;
        }
        A = A/10;
    } 
    while(B!=0){
        if(B%10==DB){
            pb =pb*10 +DB;
        }
        B = B/10;
    }
    printf("%d",pa+pb);
    return 0;
}