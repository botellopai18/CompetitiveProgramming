#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, cant=0; cin>>n;
    ll m=1000000001, ind, x;
    vector<ll> a;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
        if(a[i]!=m)
            cant++;
        if(a[i]<m)
        {
            ind=i;
            m=a[i];
        }
    }
    ll ans;
    vector< pair<ll,ll> > print;
    if(m==1 && cant>=2)
        ans=-1;
    else if(cant==1)
        ans=0;
    else
    {
        //cout<<"dif ";
        ll m2=m, ind2=ind;
        ans=0;
        cant=1;
        while(cant<n)
        {
            m=m2;
            ind=ind2;
            cant=0;
            for(ll i=0; i<n; i++)
            {
                while(a[i]>m)
                {
                    ans++;
                    a[i] = (a[i]+m-1)/m;
                    print.push_back( make_pair(i+1, ind+1) );
                }
                if(a[i]==m)
                {
                    cant++;
                }
                if(a[i]<m)
                {
                    ind2=i;
                    m2=a[i];
                }
            }
        }
    }
    cout<<ans<<endl;
    for(ll i=0; i<ans; i++)
    {
        cout << print[i].first << " "
             << print[i].second << endl;     
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}