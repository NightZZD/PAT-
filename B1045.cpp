#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> leftMax(n);
    vector<int> rightMin(n);
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    leftMax[0] = v[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1],v[i-1]);
    }
    rightMin[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i+1],v[i+1]);
    }
    for (int i = 0; i < n; i++) {
        if (v[i] >= leftMax[i] && v[i] <= rightMin[i]) {
            ans.push_back(v[i]);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        if (i != ans.size() - 1) {
            printf("%d ", ans[i]);
        }
        else {
            printf("%d", ans[i]);
        }
    }
    printf("\n");
    return 0;
}