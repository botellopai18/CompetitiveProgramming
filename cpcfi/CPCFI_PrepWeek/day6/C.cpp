#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    ll a, b, c1=0, c2=0, c, ans=0;
    for(int i=0; i<n; i++){
        cin>>a;
        b=a%3;
        if(b==1){
            c1++;
            if(c2>=1){
                ans++;
                c2--;
                c1--;
            }
        }else if(b==2){
            c2++;
            if(c1>=1){
                ans++;
                c2--;
                c1--;
            }
        }else{
            ans++;
        }
    }
    c=max(c1,c2)-max(c1,c2)%3;
    ans+=c/3;
    cout<<ans<<endl;
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}