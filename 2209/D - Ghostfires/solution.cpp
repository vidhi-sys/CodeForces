#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long r,g,b;
        scanf("%lld %lld %lld", &r,&g,&b);
        long long cnt[3] = {r,g,b};
        long long total = r+g+b;
        string res;
        res.reserve(total);
        int last1=-1,last2=-1,last3=-1;
        for(long long step=0; step<total; step++){
            int best=-1;
            long long bestCount=-1;
            for(int c=0;c<3;c++){
                if(cnt[c]<=0) continue;
                if(c==last1 || c==last3) continue;
                if(cnt[c] > bestCount){
                    bestCount = cnt[c];
                    best = c;
                } else if(cnt[c]==bestCount && best!=-1){
                    if(c==last2) best=c; // prefer "repeat 2-back" on ties
                }
            }
            if(best==-1) break; // safety guard
            res.push_back(best==0?'R':(best==1?'G':'B'));
            cnt[best]--;
            last3=last2; last2=last1; last1=best;
        }
        printf("%s
", res.c_str());
    }
    return 0;
}