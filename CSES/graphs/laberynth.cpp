//NOT DONE
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MAX 1000000



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
    int in[2], fin[2];
    for(int i=0; i<n+2; i++) {
        for(int j=0; j<m+2; j++) {
            if(i==0 || j==0 || i==n+1 || j==m+1) {
                a[i][j]=0;
                continue;
            }
            char x; cin>>x;
            x=='#' ? a[i][j]=0 : a[i][j]=1;
            if(x=='A'){
                in[0]=i; in[1]=j; 
            }
            if(x=='B'){
                fin[0]=i; fin[1]=j;
            } 
        }
    }
    
    for(int i=1; i<n+1; i++) {
        for(int j=1; j<m+1; j++) {
            int x = 1000*(i-1) + j-1;
            
            if(a[i-1][j]==1) adj[x].pb(x-1000);
            if(a[i+1][j]==1) adj[x].pb(x+1000);
            if(a[i][j-1]==1) adj[x].pb(x-1);
            if(a[i][j+1]==1) adj[x].pb(x+1);
        }
    }
    bool vis[MAX];
    int dis[MAX];


    dis[in[0]][in[1]];
    vis[in[0]][in[1]] = true;
    queue<pair<int,int>> q;
    q.push({in[0], in[1]});
    while (!q.empty()) {
        pair<int,int> s = q.front(); q.pop();
        // process node s
        for(auto u: adj[s]) {
            if(!vis[u]) {
                vis[u] = true;
                dis[u] = dis[s] + 1;
                p[u] = s;
                q.push(u);
            }
        }
        
    }
    
}