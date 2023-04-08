//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k; cin>>n>>k;
    if(n%2 == k%2 || n%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ll t; cin>>t;
    while(t--) solve();
}