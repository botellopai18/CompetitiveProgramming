#include <bits/stdc++.h>
using namespace std;
void solve(){// a->97
    int n; cin>>n;
    int a[n], b[n], max=0, ind;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        b[i]=a[i];
        if(a[i]>max) {
            max=a[i];
            ind=i;
        }
    }
    sort(a, a+n);
    for(int i=0; i<n; i++) {
        if(i==ind){
            cout<<b[i]-a[n-2]<<" ";
        }else{
            cout<<b[i]-a[n-1]<<" ";
        }
    }
    cout<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}