//AC C:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    string s; cin>>s; // 0->79, X->88
    ll co=0, cx=0, ans=0;
    ll w=sqrt(n);
    for(ll i=3; i<w+1; i++){
        co=0; cx=0;
        for(ll j=0; j<i*i; j++){
            s[j]==79 ? co++ : cx++;
        }
        //cout<<i<<" "<<co<<" "<<cx<<endl;
        if(co==(i-2)*(i-2)) ans++;
        if(cx==(i-2)*(i-2)) ans++;
        for(ll j=i*i; j<n; j++){
            s[j-i*i]==79 ? co-- : cx--;
            s[j]==79 ? co++ : cx++;
            if(co==(i-2)*(i-2)) ans++;
            if(cx==(i-2)*(i-2)) ans++;
            //cout<<i<<" "<<co<<" "<<cx<<endl;
        }
    }
    cout<<ans<<endl;
}