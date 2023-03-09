#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin>>n;
    int a[n], c1=0, k;
    string ans;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            c1++;
        }
    }
    if(c1%2==0){
        k=c1/2;
        if((n-k)%2==0){
            ans="YES";
        }else{
            if(k<1){
                ans="NO";
            }else{
                ans="YES";
            }
        }
    }else{
        ans = "NO";
    }
    cout<<ans<<endl;
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}