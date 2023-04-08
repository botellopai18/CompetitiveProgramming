//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve(){
    ll n,s1,s2; cin>>n>>s1>>s2;
    ll x,y;
    vector<pair<ll,ll>> r;
    vector<ll> a,b;
    for(int i=0; i<n; i++) {
        cin>>x;
        r.pb({x,i+1});
    }
    sort(r.rbegin(), r.rend());
    x=s1; y=s2;
    for(int i=0; i<n; i++){
        if(x<y){
            a.pb(r[i].second);
            x+=s1;
            
        }else{
            b.pb(r[i].second);
            y+=s2;
            
        }
    }
    cout<<a.size()<<" ";
    for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
    cout<<endl<<b.size()<<" ";
    for(int i=0; i<b.size(); i++) cout<<b[i]<<" ";
    cout<<endl;
}
int main(){
    ll t; cin>>t;
    while(t--) solve();
}