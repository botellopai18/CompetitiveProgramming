//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin>>n;
    ll a, ans=0;
    priority_queue<int> q;
    for(int i=0; i<n; i++){
        cin>>a;
        q.push(a);
        if(a==0){
            ans+=q.top();
            q.pop();
        }
    }
    cout<<ans<<endl;

}
int main(){
    int t; cin>>t;
    while(t--) solve();
}