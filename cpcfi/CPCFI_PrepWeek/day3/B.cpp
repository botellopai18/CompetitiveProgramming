#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s, sub1, sub2, ans;
    cin>>s;
    int l=s.length();
    if(l%2==0){
        l = l/2;
        sub1 = s.substr(0, l);
        sub2 = s.substr(l, l);
        if(sub1==sub2){
            ans = "YES";
        }else{
            ans = "NO";
        }
    }else{
        ans = "NO";
    }
    cout<<ans<<endl;
}
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}