#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    string A,B;
    cin>>A>>B;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int a=A.length();
    int b=B.length();
   if (a > b) {
        for (int i = 0; i < a - b; i++) {
            B += "0";
        }
    }
    else if (a < b) {
        for (int i = 0; i < b-a; i++) {
            A += "0";
        }
    int maxlength = max(a,b);
    string a[]={"0","1","2","3","4","5","6","7","8","9","J","Q","K"};
    stack<string> s;
    for(int i=0;i<maxlength;i++){
      if(i%2==0){
        s.push(a[(A[i]+B[i])%13]);
      }else{
        int res =B[i]-A[i];
        if(res<0) res+=10;
        s.push(to_string(res));
      }
    }
    while(s.size()!=0){
      cout<<s.top;
      s.pop();
    }
    }
    return 0;
}