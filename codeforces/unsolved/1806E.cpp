//not done
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    ll n, qq;  cin>>n>>qq;
    ll a[n];
    ll lili[n] = {0};
    vector<ll> adj[n];
    map<pair<ll,ll>, ll> m;
    int dad[n];

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    dad[0]=0;
    for(int i=1; i<n; i++){
        int x; cin>>x; x--;
        adj[x].pb(i);
        dad[i]=x;
    }
    
    queue<ll> q;
    q.push(0);
    lili[0] = a[0]*a[0];
    while(!q.empty()) {
        int s = q.front(); q.pop();
        for(auto u : adj[s]) {
            lili[u] = lili[s] + a[u]*a[u];
            //cout<<s<<":"<<lili[s]<<"->"<<u<<": "<<lili[u]<<endl;
            q.push(u);
        }
    }

    for(int i=0; i<qq; i++) {
        ll x,y, ans=0; cin>>x>>y;
        x--; y--;
        int cnt=0;
        while(x!=y && cnt<n){
            if(m.count({x,y})==1) {
                ans+=m[{x,y}];
                x=0;
                break;
            }
            ans += a[x]*a[y];
            x = dad[x]; y = dad[y];
            //cout<<ans<<" ";
            cnt++;
        }
        ans += lili[x];
        if(m.count({x,y})==0) {
            m[{x,y}] = ans;
            m[{y,x}] = ans;
        }
        if(cnt<=n){
            cout<<ans<<endl;
        }else{
            cout<<"!!!!"<<endl;
        }
        

    }
}

int main(){
    solve();
}