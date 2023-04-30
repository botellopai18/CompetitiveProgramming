#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    if(k==(n*m-1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}