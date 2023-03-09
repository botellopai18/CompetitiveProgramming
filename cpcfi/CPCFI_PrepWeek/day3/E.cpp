#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s;
    int l;
    cin>>s;
    l = s.length();
    if(s[0]!=s[l-1]){
        s[0] = s[l-1];
    }
    cout<<s<<endl;
}
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}