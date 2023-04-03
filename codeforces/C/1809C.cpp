//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k; cin>>n>>k;
    int a=sqrt(2*k);
    while(a*(a+1)>=2*k) a--;
    int dif=k-(a*a+a)/2;
    dif=-a+dif-1;
    for(int i=0; i<n; i++){
        if(i<a) cout<<2<<" ";
        else if (i==a) cout<<2*dif+1<<" ";
        else cout<<-100<<" ";
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}