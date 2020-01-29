#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int N=0;
    int m=0, n=0;
    cin >> N;
    vector<int> v(N); 
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = sqrt(N); i < N; i++) {
        if (N % i == 0) {
            n = i;
            m = N / n;
            break;
        }
    }
    int sum = 0;
    int x = 0, y = 0;
    vector<vector<int> > ans(m, vector<int>(n));
    ans[x][y] = v[sum];
    while (sum < N-1) {
        while (y + 1 < n && ans[x][y + 1] == 0) {
            ans[x][++y] = v[++sum];
        }//right
        while (x + 1 < m && ans[x + 1][y] == 0) {
            ans[++x][y] = v[++sum];
        }//down
        while (y - 1 >= 0 && ans[x][y-1] == 0) {
            ans[x][--y] = v[++sum];
        }//left
        while (x - 1  >= 0 && ans[x - 1][y] == 0) {
            ans[--x][y] = v[++sum];
        }//up
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                cout << ans[i][j] << endl;
            }
            else {
                cout << ans[i][j] << " ";
            }
        }
    }
    return 0;
}