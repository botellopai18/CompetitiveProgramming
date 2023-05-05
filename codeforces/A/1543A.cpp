//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    ll a,b; cin>>a>>b;
    ll x=abs(a-b);
    cout<<x<<" "<<min(a%x, x-(a%x))<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}