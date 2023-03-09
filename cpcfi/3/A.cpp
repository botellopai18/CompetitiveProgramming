#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, a, cnt=0;
    cin>>n>>m;
    int b[n];
    set<int> p;
    for(int i=1; i<=m; i++)
    {
        cin>>a;
        if(p.count(a)==0 && cnt<n)
        {
            //cout<<i<<" ";
            b[cnt]=i;
            cnt++;
            p.insert(a);
        }
    }
    for(int i=cnt; i<n; i++)
    {
        cout<<-1<<" ";
    }
    for(int i=cnt-1; i>=0; i--)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}