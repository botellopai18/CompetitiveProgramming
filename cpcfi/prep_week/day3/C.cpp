#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s, sub1, sub2;
    int l, ans=0;
    cin>>l>>s;
    for(int i=0; i<l; i++){
        if(s[i]-96>ans){
            ans = s[i]-96;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}