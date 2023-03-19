#include <bits/stdc++.h>
using namespace std;
void solve(){// a->97
    int n; cin>>n;
    int a[n], dif=0;
    string lili="YES";
    cin>>a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        if(a[i]>a[i-1]){
            dif=1;
        }
        if(a[i]<a[i-1]){
            if(dif==0 || dif==-1) {
                dif=-1;
            }
            else if(dif==1){
                lili="NO";
            }
        }
    }
    //cout<<n<<" ";
    cout<<lili<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}