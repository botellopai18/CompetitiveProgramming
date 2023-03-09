#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s, t;
    long long lt, ls, ans=0, as=0;
    cin>>s>>t;
    lt = t.length();
    ls = s.length();
    for(int i=0; i<lt; i++){
        if(t[i]=='a'){
            as++;
        }
    }
    if(as==lt){
        if(lt==1) ans = 1;
        else ans = -1;
    }else if(as!=0){
        ans = -1;
    }else{
        ans = 1;
        for(int i=0; i<ls; i++){
            ans*=2;
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