//AC
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define Inf 1000000000000000000
int main(){
    ll n,m; cin>>n>>m;
    vector<pair<ll,ll>> adj[n];
    bool checked[n];
    ll d[n];
    ll last[n];
    for(int i=0; i<n; i++){
        last[i]=-1;
        d[i]=Inf;
        checked[i]=false;
    } 
    for(int i=0; i<m; i++){
        ll a,b,w; cin>>a>>b>>w;
        adj[a-1].pb({b-1, w});
        adj[b-1].pb({a-1, w});
    }
    priority_queue<pair<ll,ll>> q;
    d[0]=0;
    q.push({0,0});
    while(!q.empty()){
        int a=q.top().second; q.pop();
        if(checked[a]) continue;
        checked[a]=true;
        for(auto u:adj[a]){
            ll b=u.first, w=u.second;
            if(d[a]+w<d[b]){
                last[b]=a;
                d[b]=d[a]+w;
                q.push({-d[b], b});
            }
        }
    }
    if(d[n-1]!=Inf){
        stack<ll> ans;
        ll x=n-1;
        while(last[x]!=-1){
            ans.push(x+1);
            x=last[x];
        }
        ans.push(x+1);
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
    }else{
        cout<<-1<<endl;
    }
}