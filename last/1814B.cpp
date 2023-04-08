//not done :C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b; cin>>a>>b;
    ll x=sqrt(max(a,b)), ans=1000000000;
    for(int i=1; i<=x; i++){
        ll m=i-1;
        m+=(a+i-1)/i;
        m+=(b+i-i)/i;
        ans=min(ans,m);
    }
    cout<<ans<<endl;
}
int main(){
    ll t; cin>>t;
    while(t--) solve();
}