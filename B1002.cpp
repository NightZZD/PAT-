#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n.length();i++){
        sum += (n[i]-'0');
    }    
    string ans = to_string(sum);
    string py[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    for(int i=0;i<ans.length();i++){
        if(i!=ans.length()-1){
            cout<<py[ans[i]-'0']<<" ";
        }
        cout<<py[ans[i]-'0'];
    }
    return 0;
}