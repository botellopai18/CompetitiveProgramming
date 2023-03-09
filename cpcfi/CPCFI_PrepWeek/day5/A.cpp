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
    ll p, n, a, ans=-1;;
    cin>>p>>n;
    ll m[p];
    for(int i=0; i<p; i++){
        m[i]=0;
    }
    for(int i=0; i<n; i++){
        cin>>a;
        if(m[a%p]==0){
            m[a%p]=1;
        }else{
            ans = i+1;
            break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    solve();
}