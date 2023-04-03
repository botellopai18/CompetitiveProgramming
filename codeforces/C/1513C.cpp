#include <bits/stdc++.h>
using namespace std;
#define PP 1000000007
void prod(ll x[4], ll y[4])
{
    ll a = (x[0]*y[0])%PP + (x[1]*y[2])%PP;
    ll b = (x[0]*y[1])%PP + (x[1]*y[3])%PP;
    ll c = (x[2]*y[0])%PP + (x[3]*y[2])%PP;
    ll d = (x[2]*y[1])%PP + (x[3]*y[3])%PP;
    x[0] = a%PP;
    x[1] = b%PP;
    x[2] = c%PP;
    x[3] = d%PP;
}
void power(ll x[4], ll n)
{
    if(n<=1) return;
    ll y[4] = {1, 1, 1, 0};
    power(x, n/2);
    prod(x,x);
    if(n%2==1)
    {
        prod(x,y);
    }
}
ll fib(ll n)
{
    ll x[4] = {1,1,1,0};
    if(n==0) return 0;
    power(x, n-1);
    return x[0]%PP;
}
void solve() {
    string n; cin>>n;
    int m; cin>>m;
    ll zeros=0, unos=0, nonzeros=0;
    for(int i=0; i<n.length(); i++) {
        if(n[i]=='0') zeros++;
    }
    // f0:1, f1:1, f2:2, f3:3, f4:5, f5:8, 
    //x no 0 y y 0s
    // 
    nonzeros = n.length()-zeros;
    if(m>=10) {
        ll x=2*(m/10), n0=nonzeros;
        nonzeros = ((fib(x)*n0)%PP + (fib(x-1)*zeros)%PP)%PP;
        zeros += (fib(x-2)*zeros + fib(x-1)*n0)%PP;
        cout<<nonzeros<<" "<<zeros<<endl;
    }

}
int main(){
    int t; cin>>t;
    while(t--) solve();
}