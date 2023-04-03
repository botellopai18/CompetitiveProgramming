#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n], zeros=0, ones=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0) zeros++;
        if(a[i]==1) ones++;
    }
    if(zeros>(n+1)/2){
        if((n-zeros)==ones && ones>0){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }else{
        cout<<0<<endl;
    }
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}