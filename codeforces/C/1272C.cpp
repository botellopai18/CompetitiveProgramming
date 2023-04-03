//https://codeforces.com/contest/1272/problem/C
#include <bits/stdc++.h>
using namespace std;
string s;
#define ll long long
set<char> c;
ll quitar(ll n, ll m, ll i){
    ll cnt=i; ll q=0;
    if(cnt>=n+1) return 0;
    while(cnt<=n){
        if(c.count(s[cnt-1])==0) {
            q+=(cnt-i+1)*(m-cnt+i);
            //cout<<"m->"<<m<<" cnt-i->"<<cnt-1<<" n-cnt"<<n-cnt<<" "<<s[cnt-1]<<": "<<q<<endl;
            q+=quitar(n, n-cnt, cnt+1);
            return q;
        }
        cnt++;
    }
    return 0;
}

int main()
{
    ll n, k; cin>>n>>k;
    cin>>s;
    char a;
    //cout<<n<<s<<endl;
    for(int i=0; i<k; i++){
        cin>>a;
        c.insert(a);
    }
    ll ans=(n*n+n)/2;
    ans-=quitar(n, n, 1);
    cout<<ans<<endl;
    return 0;
}
