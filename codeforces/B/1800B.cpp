//AC
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int low[26], up[26];
    for(int i=0; i<26; i++){
        low[i]=0; up[i]=0;
    }
    for(int i=0; i<n; i++){
        s[i]<91 ? up[s[i]-65]++ : low[s[i]-97]++;
    }
    int ans=0, dif=0;
    for(int i=0; i<26; i++){
        ans+=min(low[i], up[i]);
        dif+=abs(low[i]-up[i])/2;
    }
    cout<<ans+min(dif,k)<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}