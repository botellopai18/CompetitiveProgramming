#include <bits/stdc++.h>
using namespace std;
void solve(){// a->97
    int n, max=0; cin>>n;
    string s; cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]-96>max){
            max=s[i]-96;
        }
    }
    cout<<max<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}