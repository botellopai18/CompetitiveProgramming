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
#define REP(i,a,b) for(int i=a; i<b; i++)

void solve(){
    ll n, ans=0, k;
    cin>>n;
    ll a[n], s[n], t[n];
    cin>>a[0];
    s[0]=1;
    for(int i=1; i<n; i++){
        cin>>a[i];
        if(a[i]>a[i-1]){
            s[i]=s[i-1]+1;
        }else{
            s[i]=1;
        }
        ans = max(ans, s[i]);
    }
    t[n-1]=1;
    for(int i=n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            t[i]=t[i+1]+1;
        }else{
            t[i]=1;
        }
    }
    /*
    for(int i=0; i<n; i++){
        cout<<s[i]<<" "<<t[i]<<endl;
    }
    */
    for(int i=1; i<n-1; i++){
        if(a[i-1]<a[i+1]){
            ans=max(ans, s[i-1]+t[i+1]);
        }
    }
    cout<<ans<<endl;
}
int main(){
    solve();
}