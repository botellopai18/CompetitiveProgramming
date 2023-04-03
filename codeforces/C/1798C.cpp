//incomplete
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
void solve(){
    int n; cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}