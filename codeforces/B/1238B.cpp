//done
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    int n,r; cin>>n>>r;
    set<int> s; 
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        s.insert(a);
    }
    int shots=0;
    int cnt=s.size()+1;
    for(auto u: s) {
        cnt--;
        int a=(u+r-1)/r, b=cnt;
        int x=min((u+r-1)/r, cnt);
        shots=max(x, shots);
    }
    cout<<shots<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}