//AC
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    string ans="Yes";
    for(int i=0; i<n-1; i++){
        if((min(a[i], b[i]) <= min(a[n-1],b[n-1])) && (max(a[i], b[i]) <= max(a[n-1],b[n-1]))){
            ans="Yes";
        }else{
            ans="No";
            break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}