#include<iostream>
#include<map>
#include<vector>
using namespace std;
struct student
{
    string s;
    int examnum;
};
int main(){
    int N;
    cin>>N;
    vector<student> v(N);
    int key;
    map<int,student> m;
    for(int i=0;i<N;i++){
        cin>>v[i].s>>key>>v[i].examnum;
        m[key]=v[i];
    }
    int M;
    cin>>M;
    int trynum;
    for(int i=0;i<M;i++){
        cin>>trynum;
        cout<<m[trynum].s<<" "<<m[trynum].examnum<<endl;
    }
    return 0;
}