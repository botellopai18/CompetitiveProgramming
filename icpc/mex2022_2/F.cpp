#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
int main()
{
    ll n, m, lili;
    cin>>n>>m;
    set<ll> a;
    a.insert(-1);
    a.insert(n+1);
    for(int i=1;i<=m; i++)
    {
        cin>>lili;
        if(lili<1 || lili>=n)
        {
            break;
        }
        a.insert(lili);
    }
    if(n==1)
    {
        lili=1;
    }else
    {// 1 1 2 3 5 8
        lili=1;
        auto it = a.begin();
        for(ll i=1; i<a.size(); i++)
        {
            auto it2 = it;
            ++it;
            ll x=((*it)-(*it2))%PP;
            //cout<<*it2<<","<<*it<<": "<<x<<","<<lili<<endl;
            if(x>1)
            {
                lili=(lili*(fib(x-1)))%PP;
                //cout<<i<<" "<<x<<": "<<lili<<endl;
            }else
            {
                //cout<<x<<","<<i<<"!";
                lili=0;
                break;    
            }
        }
    }
    cout<<lili<<endl;
}