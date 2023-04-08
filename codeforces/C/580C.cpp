//AC
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> adj[100000];
vector<int> cats;
vector<bool> visited;
int ans=0;
void dfs(int s, int m, int cnt){
    visited[s]=true;
    if(cnt>0 || s==0){
        cats[s]==1 ? cnt++ : cnt=0;
    }else{
        cnt=cats[s];
    }
    if(cnt>m){
        //cout<<"end"<<cnt<<endl;
        return;
    }
    
    if(adj[s].size()==1 && s!=0){
        //cout<<"new"<<s<<endl;
        ans++;
        return;
    }
    for(auto k : adj[s]){
        if(!visited[k]){
            //cout<<s<<"->"<<k<<"("<<cnt<<"), ";
            dfs(k, m, cnt);
        }
    }
}
int main(){
    int n,m; cin>>n>>m;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        cats.pb(a);
        visited.pb(false);
    }
    for(int i=0; i<n-1; i++){
        int x,y; cin>>x>>y;
        adj[x-1].pb(y-1);
        adj[y-1].pb(x-1);
        //cout<<adj[x-1][0]<<" ";
    }
    dfs(0, m, 0);
    cout<<ans<<endl;
}