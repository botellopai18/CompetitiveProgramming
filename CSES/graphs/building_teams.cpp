// AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
    int n, m; cin>>n>>m;
    vector<int> adj[n];
    bool ans=true;
    int x[n];
    for(int i=0; i<m; i++){
        int a,b; cin>>a>>b;
        a--; b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    queue<int> q;
    bool visited[n]={0};
    for(int i=0; i<n; i++){
        if(visited[i]==1){
            //cout<<"!";
            continue;
        }else{
            visited[i]=true;
            q.push(i);
            x[i]=0;
            while(!q.empty()){
                int s=q.front(); q.pop();
                for(auto u : adj[s]){
                    //cout<<s<<"->"<<u<<" ";
                    if(visited[u]==1){
                        if(x[u]==x[s]){
                            ans=false;
                        }
                        continue;
                    }
                    visited[u]=true;
                    x[u]=1-x[s];
                    q.push(u);
                }
                //cout<<endl;
            }
        }
    }
    if(ans){
        for(int i=0; i<n; i++){
            if(visited[i]==1){
                cout<<x[i]+1<<" ";   
            }else{
                cout<<1<<" ";
            }
        }
        cout<<endl;   
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    
}