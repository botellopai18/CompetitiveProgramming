//AC c:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin>>n;
    int cnt=0, a=0, b=0;
    for(int i=0; i<n; i++){
        cin>>b;
        if(b<a){
            cnt++;
            a=0;
        }else{
            if(a==0){
                a=b;
            }else{
                a=max(a,b);   
            }
        }
    }
    cout<<cnt<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}