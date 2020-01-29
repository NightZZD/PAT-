#include<stdio.h>
#include<stack>
#include<iostream>
using namespace std;
int main(){
    string s;
    stack<string> st;
    while(cin>>s){
        st.push(s);
    }
    cout << st.top();
    st.pop();
    while(!st.empty()){
        cout<<" "<<st.top();
        st.pop();
    }
    return 0;
}