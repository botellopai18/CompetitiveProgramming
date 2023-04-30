#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
void solve(){
    int n, mx, Mx, my, My; string ans="YES";
    cin>>n;
    pair<int,int> a;
    pair<int,int> b;
    pair<int,int> c;
    cin>>a.first>>a.second;
    cin>>b.first>>b.second;
    cin>>c.first>>c.second;
    Mx=max(max(a.first, b.first), c.first);
    mx=min(min(a.first, b.first), c.first);
    My=max(max(a.second, b.second), c.second);
    my=min(min(a.second, b.second), c.second);
    if(Mx!=a.first && mx!=a.first){
        ans = "NO";
    }
    if(My!=a.second && my!=a.second){
        ans = "NO";
    }
    //cout<<mx<<" "<<Mx<<endl;
    //cout<<my<<" "<<My<<endl;
    cout<<ans<<endl;
}   
int main(){
    solve();
}