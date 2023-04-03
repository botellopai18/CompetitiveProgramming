//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,cnt=1, ans=0; cin>>n;
    string s; cin>>s;
    s="2"+s;
    for(int i=2; i<=n; i++){
        s[i]==s[i-1] ? cnt++ : cnt=1;
        if(cnt==1){
            if(s[i-2]!=s[i]){
                ans++;   
            }
        }else if (cnt==2){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}