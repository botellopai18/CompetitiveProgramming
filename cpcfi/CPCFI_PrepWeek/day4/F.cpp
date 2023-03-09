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
    ll dp[61], n;
    dp[0]=0;
    dp[1]=0;
    dp[2]=2;
    for(int i=3; i<=60; i++){
        dp[i]=dp[i-2]*2;
    }
    cin>>n;
    cout<<dp[n];
}
int main(){
    int T; T=1;
    for(int t=0; t<T; t++){
        solve();
    }
}