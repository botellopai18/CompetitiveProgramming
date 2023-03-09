//NOT DONE :C
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define fory(i,a,b) for(int i=a; i<b; i++)
int main(){
    ll n,m, ans;
    cin>>n>>m;
    ll a[n], s, t, f[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    f[0]=0;
    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            f[i] = f[i-1]+a[i-1]-a[i];
        }else{
            f[i] = f[i-1];
        }
    }
    b[n-1]=0;
    for(int i=n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            b[i] = b[i+1] + a[i+1]-a[i];
        }else{
            b[i] = b[i+1];
        }
    }
    /*
    for(int i=0; i<n; i++){
        cout<<f[i]<<" "<<b[i]<<endl;
    }
    */
    for(int i=0; i<m; i++){
        cin>>s>>t;
        s--;
        t--;
        if(s<t){
            ans=f[t]-f[s];
        }else{
            ans=b[t]-b[s];
        }
        cout<<ans<<endl;
    }
}