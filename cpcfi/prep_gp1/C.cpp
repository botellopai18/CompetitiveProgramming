//DONE C:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MAX 1000001
ll c[MAX];
vector<ll> p;
bool vis[MAX] = {false};

void create(){
    vis[0]=true; vis[1]=true; 
    c[0]=0;  c[1] = 0;
    for(int i=1; i<MAX; i++) {
        if(vis[i]) {
            c[i] = c[i-1];
            continue;
        }
        c[i] = c[i-1]+1;
        vis[i] = true;
        p.pb(i);
        //cout<<c[i]<<", "<<i<<endl;
        for(int j=2*i; j<MAX; j+=i) {
            vis[j] = true;
        }
    }
}
void solve() {
    int a,b; cin>>a>>b;
    int ans = c[b]-c[a-1];
    cout<<ans<<endl;
}
int main() {
    create();
    int t; cin>>t;
    while(t--) solve();
    
}

