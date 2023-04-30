#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MAX 1000000

bool vis[MAX] = {0};
vector<int> adj[MAX];

void dfs(int s) {
    if(vis[s]) return;
    vis[s] = true;

    for(auto u: adj[s]) {
        dfs(u);
    }
}
void solve() {
    int n,m; cin>>n>>m;
    int a[n+2][m+2];

    for(int i=0; i<n+2; i++) {
        for(int j=0; j<m+2; j++) {
            if(i==0 || j==0 || i==n+1 || j==m+1) {
                a[i][j]=0;
                continue;
            }
            char x; cin>>x;
            x=='#' ? a[i][j]=0 : a[i][j]=1;
        }
    }
    
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<m+1; j++) {
            int x = 1000*(i-1) + j-1;
            if(a[i][j]==0){
                vis[x]=true;
            }
            if(a[i-1][j]==1) adj[x].pb(x-1000);
            if(a[i+1][j]==1) adj[x].pb(x+1000);
            if(a[i][j-1]==1) adj[x].pb(x-1);
            if(a[i][j+1]==1) adj[x].pb(x+1);
        }
    }
    int rooms=0;
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<m+1; j++) {
            int x = 1000*(i-1) + j-1;
            if(vis[x]) continue;
            dfs(x);
            rooms++;
        }
    }
    cout<<rooms<<endl;
    
}

