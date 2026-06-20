#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for (auto &x : a) scanf("%lld", &x);
 
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            int less = 0, greater = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) greater++;
                else if (a[j] < a[i]) less++;
            }
            ans[i] = max(less, greater);
        }
 
        for (int i = 0; i < n; i++) printf("%d ", ans[i]);
        printf("
");
    }
    return 0;
}