#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c, d; cin>>a>>b>>c>>d;
    int lili=0;
    if(d<b){
        lili=-1;
    }else{
        lili+=(d-b);
        a+=d-b;
        if(c>a){
            lili=-1;
        }else {
            lili+=a-c;
        }
    }
    cout<<lili<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}
