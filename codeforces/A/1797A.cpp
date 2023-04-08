//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve() {
    int n,m; cin>>n>>m;
    int a,b,x,y; cin>>a>>b>>x>>y;
    int ans1=4,ans2=4;
    if(a==1) ans1--;
    if(a==n) ans1--;
    if(b==1) ans1--;
    if(b==m) ans1--;
    if(x==1) ans2--;
    if(x==n) ans2--;
    if(y==1) ans2--;
    if(y==m) ans2--;
     cout<<min(ans1,ans2)<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}