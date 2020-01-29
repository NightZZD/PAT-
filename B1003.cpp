#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        map<char,int> m;
        int loc_P=0,loc_T=0;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            if(s[i] == 'P')loc_P =i;
            if(s[i] == 'T')loc_T =i;
        }
        int x=loc_P;
        int y=loc_T+1-loc_P-2;
        int z=s.length()-loc_T-1;
        if( m['P']==1 &&m['T']==1&&m['A']>=1&&x*y==z&&y>=1&&m.size()==3){
            cout<<"YES"<<endl;// printf("YES\n");
        }else{
            cout<<"NO"<<endl;//printf("NO\n");
        }
    }
    return 0;
}