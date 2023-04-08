//AC
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t; cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int x=1;
    while(x<t) x+=a[x-1];
    x==t ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}