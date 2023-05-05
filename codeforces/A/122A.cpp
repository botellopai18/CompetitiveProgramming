#include <bits/stdc++.h>
using namespace std;
#define pb push_back

void solve() {
    int n; cin>>n;
    vector<int> lucky;
    lucky.pb(4);
    lucky.pb(7);
    int p10=10;
    while(p10<=1000){
        int tam=lucky.size();
        for(int i=0; i<tam; i++) {
            int x=lucky[i];
            //cout<<x<<" ";
            lucky.pb(10*x+4);
            lucky.pb(10*x+7);
            lucky.pb(p10*4+x);
            lucky.pb(p10*7+x);
        }
        p10*=10;
        //cout<<endl;
    }
    for(int i=0; i<lucky.size(); i++) {
        if(n%lucky[i]==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    solve();
}