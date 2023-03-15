/*
https://codeforces.com/contest/1759/problem/C
18nov22
Accepted C:
*/
#include <iostream>
using namespace std;
long long abso(long long w){
    if(w>=0){ return w; }
    else{ return 0-w; }
}
int main() {
    int t; cin>>t; while(t--){
        long long l, r, x, a, b; cin>>l>>r>>x;
        cin>>a>>b;
        bool la, ra, lb, rb, yes;
        int ans = 1;
        if(abso(a-b) == 0){
            ans = 0;
        }else{
            la = abso(l-a)>=x; ra = abso(r-a)>=x;
            lb = abso(l-b)>=x; rb = abso(r-b)>=x;
            if((la || ra) && (lb || rb)){
                ans = 3;
                if((la && lb) || (ra && rb)){
                    ans = 2;
                }
                if(abso(a-b)>=x){
                    ans = 1;
                }
            }else{
                ans = -1;
            }
        }
        cout<<ans<<endl;
    }
}