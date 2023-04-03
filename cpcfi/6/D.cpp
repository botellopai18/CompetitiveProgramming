#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, q; cin>>n>>q;
    ll imp[n+1], b; cin>>b;
    imp[0]=0;
    b%2==1 ? imp[1]=1 : imp[1]=0;
    for(int i=2; i<=n; i++){
        cin>>b;
        b%2==1 ? imp[i]=imp[i-1]+1 : imp[i]=imp[i-1];
    }
    ll l,r,k, total=0;
    for(int i=0; i<q; i++){
        total=0;
        cin>>l>>r>>k;
        k%2==1 ? total+=r+1-l : total+=0;
        total+=imp[l-1];
        total+=imp[n]-imp[r];
        total%2==1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}