//AC C:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    for(ll i=0; i<60; i++){
        if(n>=(1<<i)){
            cout<<(1<<i)-1<<endl;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}