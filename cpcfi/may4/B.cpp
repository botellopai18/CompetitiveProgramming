//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define PP 1000000000000000000
void solve() {
    ll n; cin>>n;
    ll a;
    ll mi=PP, ma=0;
    for(int i=0; i<n; i++){
        cin>>a;
        ll x=2, y=a; 
        while(y!=0) {
            y/=2;
            x*=2;
        }
        cout<<i+1<<" "<<x-a<<endl;
    }
    
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}