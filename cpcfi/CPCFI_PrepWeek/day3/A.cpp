#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if(s == "YES"){
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