//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
    int n; cin>>n;
    int l=0, r=0;
    for(int i=0; i<n; i++) {
        int a,b; cin>>a>>b;
        l+=a; r+=b;
    }
    int ans=min(l, n-l) + min(r, n-r);
    cout<<ans<<endl;
}