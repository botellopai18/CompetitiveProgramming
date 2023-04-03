#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a, si=0, sp=0;
    for(int i=0; i<n; i++){
        cin>>a;
        a%2==0 ? sp+=a : si+=a;
    }
    sp>si ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}