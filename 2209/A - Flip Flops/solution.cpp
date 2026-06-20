#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        long long c, k;
        scanf("%d %lld %lld", &n, &c, &k);
        vector<long long> a(n);
        for (auto &x : a) scanf("%lld", &x);
        
        sort(a.begin(), a.end());
        
        for (int i = 0; i < n; i++) {
            if (a[i] <= c) {
                long long extra = min(k, c - a[i]);
                long long boosted = a[i] + extra;
                c += boosted;
                k -= extra;
            } else {
                break;
            }
        }
        
        printf("%lld
", c);
    }
    return 0;
}