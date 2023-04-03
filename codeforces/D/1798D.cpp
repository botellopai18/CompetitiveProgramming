#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
void solve(){
    ll n; cin>>n;
    ll a[n];
    vector<ll> neg, pos;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        a[i]<0 ? neg.pb(a[i]) : pos.pb(a[i]);
    }
    if(neg.size()==0) {
        cout<<"No"<<endl;
        return;
    }
    sort(pos.rbegin(),pos.rend());
    sort(neg.begin(), neg.end());
    cout<<"Yes"<<endl;
    ll cpos=0, cneg=0;
    ll sum=0;
    
    while(cpos+cneg<n){
        //cout<<cpos+cneg<<": "<<sum<<" "<<pos[cpos]<<" "<<neg[cneg]<<endl;
        if(sum<=0 && cpos<pos.size()){
            cout<<pos[cpos]<<" ";
            sum+=pos[cpos];
            cpos++;
        }else{
            cout<<neg[cneg]<<" ";
            sum+=neg[cneg];
            cneg++;
        }
    }
    
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}so