//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve(){
    ll n, m, b; cin>>n>>m;
    vector<ll> a[m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>b;
            a[j].pb(b);
        }
    }
    ll total=0;
    //cout<<"begin "<<n<<" "<<m<<endl;
    for(ll i=0; i<m; i++){
        sort(a[i].begin(), a[i].end());
        ll sum=0;
        for(ll j=0; j<n-1; j++){
            sum+=a[i][j];
            total+=(j+1)*a[i][j+1]-sum;
            //cout<<i<<" "<<j<<" "<<total<<endl;
        }
    }
    cout<<total<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}