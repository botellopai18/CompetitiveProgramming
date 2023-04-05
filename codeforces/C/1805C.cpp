//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,m; cin>>n>>m;
    ll k[n], a, b, b1, c;
    
    for(int i=0; i<n; i++) cin>>k[i];
    sort(k, k+n);
    for(int j=0; j<m; j++){
        cin>>a>>b1>>c;
        int x = 0;
        for (int z=n; z>= 1; z/=2) {
            while ((x+z)<n){
                //cout<<x<<" "<<z<<", ";
                if(k[x+z]>b1) break;
                else x+=z;
            }
        }
        //cout<<x<< " "<<k[x]<<endl;
        b=k[x]-b1;
        if(b*b<4*a*c){
            cout<<"YES"<<endl<<k[x]<<endl;
            continue;
        }
        x = n-1;
        for (int z=n; z>= 1; z/=2) {
            while ((x-z)>=0){
                if(k[x-z]<b1) break;
                else x-=z;
            }
        }
        b=k[x]-b1;
        if(b*b<4*a*c){
            cout<<"YES"<<endl<<k[x]<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}