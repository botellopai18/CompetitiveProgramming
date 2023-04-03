//AC c:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int a[n], ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }    
    sort(a, a+n);
    for(int i=n-1; i>=0; i--){
        if(a[i]>=a[n-k] && a[i]!=0){
            ans++;
        }else{
            break;
        }
    }
    cout<<ans<<endl;
}