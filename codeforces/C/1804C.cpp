// done :), but not in time
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, x, p; cin>>n>>x>>p;
    string lili="No";
    ll mx=x%n;
    mx=(n-mx)%n;
    //cout<<"new "<<n<<" "<<x<<" "<<p<<endl;
    
    for(ll i=1; i<=min(2*n, p)/2; i++)
    {
        ll s = (i*(2*i-1))%n;
        //cout<<i<<" ";
        if(s==mx){
            //cout<<"!"<<endl;
            lili="Yes";
            break;
        }
        //cout<<s<<" ";
        s = (s+2*i)%n;
        if(s==mx){
            //cout<<"!"<<endl;
            lili="Yes";
            break;
        }
        //cout<<s<<endl;
    }
    if(p%2==1 && p<2*n){
        ll s = ((p*p+p)/2)%n;
        //cout<<p<<" ";
        if(s==mx){
            //cout<<"!\n";
            lili="Yes";
        }
    }
    cout<<lili<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}