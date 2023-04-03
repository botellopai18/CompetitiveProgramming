//AC
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string ans="Yes", word="MmEeOoWw11";
    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i]==word[cnt] || s[i]==word[cnt+1]){
            continue;
        }else if(s[i]==word[cnt+2] || s[i]==word[cnt+3]){
            cnt+=2;
        }else{
            ans="No";
            break;
        }
    }
    if(s[n-1]!='w' && s[n-1]!='W'){
        //cout<<'!'<<s[n-1];
        ans="No";
    }
    if(s[0]!=word[0] && s[0]!=word[1]){
        ans="No";
    }
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}