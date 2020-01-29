#include<stdio.h>
#include<vector>
using namespace std;
struct student {
    int exam, de, cai,sum;
};
int main() {
    int N, L, H;//考生总数，最低录取分数线，优先录取线
    scanf("%d %d %d", &N, &L, &H);
    vector<student> v(N);//1才德全尽，2德胜才，才德兼亡：3德胜才，4才胜德
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &v[i].exam, &v[i].de, &v[i].cai);
        v[i].sum = v[i].de + v[i].cai;
    }
    for (auto it = v.begin(); it != v.end(); it++) {
        if(it->de<L||it->cai<L){
            v.erase(it);
        }
    }
    return 0;
}