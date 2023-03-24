//AC C:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k; cin>>n>>m>>k;
    int a[m], fedor, ans=0;
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    cin>>fedor;
    for(int i=0; i<m; i++){
        if(__builtin_popcount(a[i]^fedor)<=k) ans++;
    }
    cout<<ans<<endl;
}