#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll a, mi=100000, ma=0, cmi, cma, ans;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a==mi) cmi++;
            if(a==ma) cma++;
            if(a<mi)
            {
                mi=a;
                cmi=1;
            }
            if(a>ma)
            {
                ma=a;
                cma=1;
            }
        }
        if(mi==ma)
        {
            ans=cmi*(cmi-1);
        }else
        {
            ans=cmi*cma*2;   
        }
        cout<<ans<<endl;
    }
}