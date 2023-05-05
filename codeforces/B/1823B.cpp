//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n, k; cin>>n>>k;
    
    int cnt=0;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if(x%k!=(i+1)%k) cnt++;
    }
    //cout<<cnt<<" ";
    if(cnt<2) cout<<0<<endl;
    else if(cnt==2) cout<<1<<endl;
    else cout<<-1<<endl;
    
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}