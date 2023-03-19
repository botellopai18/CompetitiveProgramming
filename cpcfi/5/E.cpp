#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){// a->97
    ll n; cin>>n;
    ll zeros=0, ones=0, found=-1, sum=0, a, lili=0;
    ll ceros=0, unos=0, find=0;
    for(ll i=0; i<n; i++){
        cin>>a;
        sum+=a;
        if(a==0){
            lili+=sum;
            zeros++;
            if(found==-1){
                found=i;
                ones=sum;
            }
        }
        if(a==1){
            if(i>find){
                find=i;
                ceros=zeros;
                unos=sum;
            }
        }
    }
    ll d0=0, d1=0;
    if((zeros-1)>=ones){
        d0=(zeros-1)-ones;
    }
    if((zeros-ceros)<(unos-1)){
        d1=(unos-1)-(zeros-ceros);
    }
    lili+=max(d0,d1);
    //cout<<d0<<" "<<d1<<" ";
    cout<<lili<<endl;

}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}