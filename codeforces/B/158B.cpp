//AC
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int a[4] = {0};
    for(int i=0; i<n; i++) {
        int x; cin>>x; x--;
        a[x]++;
    }
    //cout<<a[0]<<endl;
    int ans = a[3];
    //cout<<ans<<endl;
    ans+=(a[1]+1)/2;
    if(a[1]%2==1) a[0] = max(0, a[0]-2);
    //cout<<ans<<" "<<a[0]<<endl;
    ans+=a[2];
    //cout<<ans<<endl;
    a[0] = max(0, a[0]-a[2]);
    ans+=(a[0]+3)/4;
    
    cout<<ans<<endl;
}

int main(){
    solve();
}