//AC c:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s; cin>>s;
    int n=s.length();
    int ca=0, pq=0, cq=0;
    ll ans=0, qas=0;
    for(int i=0; i<n; i++){
        if(s[i]=='Q'){
            ans+=qas;
            pq++;
            cq++;
            ca=0;
            //cout<<ans<<endl;
        }
        if(s[i]=='A'){
            ca++;
            qas+=pq;
            cq=0;
        }
    }
    cout<<ans<<endl;
}
int main() {
    solve();
}
