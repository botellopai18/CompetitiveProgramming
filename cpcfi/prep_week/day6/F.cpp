//WA test2
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ans=0, prod;
    if(s[0]=='-') s[0]='=';
    if(s[n-1]=='-') s[n-1]='=';
    for(int i=1; i<n-1; i++){
        if(s[i]=='-') s[i]='=';
        prod = (s[i-1]-61)*(s[i]-61);
        if( prod>-1 ){
            ans++;
        }
        //cout<<prod<<":"<<i<<",";
    }
    prod=(s[n-1]-61)*(s[0]-61);
    //cout<<prod<<":"<<0<<",";
    prod=(s[n-2]-61)*(s[n-1]-61);
    //cout<<prod<<":"<<0<<",";llll
    if((s[n-1]-61)*(s[0]-61)>-1){
        ans++;
    }
    if((s[n-2]-61)*(s[n-1]-61)>-1){
        ans++;
    }
    cout<<ans<<endl;
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}