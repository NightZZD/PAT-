#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int address;
    int data;
    int next;
};
int main(){
    int firstaddress,N,K;
    cin>>firstaddress>>N>>K;
    vector<Node> v(N);
    for(int i=0;i<N;i++){
        cin>>v[i].address>>v[i].data>>v[i].next;
    }
    return 0;
}