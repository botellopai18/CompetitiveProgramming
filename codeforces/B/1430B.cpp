//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve() {
    ll n,k; cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    ll sum=a[n-1], cnt=0;
    for(int i=n-2; i>=0; i--){
        sum+=a[i];
        cnt++;
        if(cnt>=k) break;
    }
    cout<<sum<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();
}