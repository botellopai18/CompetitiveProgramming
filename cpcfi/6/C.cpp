#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    unordered_set<char> sit;
    for(int i=0; i<n-1; i++){
        if(sit.count(s[i])==0){
            sit.insert(s[i]);
            int pairity=i%2;
            for(int j=i+1; j<n; j++){
                if(s[j]==s[i]){
                    if(j%2!=pairity){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }else{
            continue;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}