//accepted
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a,b; cin>>a>>b;
    if(b<0) b=-b;
    if(a<0) a=-a;
    int ans= 2*min(a,b);
    if(a!=b) ans+=2*abs(a-b)-1;
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}