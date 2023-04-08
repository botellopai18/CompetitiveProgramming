//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve() {
    int n,k; cin>>n>>k;
    char a[n][n];
    char b[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char x; cin>>x;
            a[j][i]=x;
            b[n-j-1][n-i-1]=x;
        }
    }
    int dif=0;
    for(int i=0; i<n; i++){
        int x=0;
        for(int j=0; j<n; j++){
            //cout<<a[i][j]<<b[i][j]<<" ";
            if(a[i][j]!=b[i][j]) x++;
        }
        //cout<<i<<": "<<x<<endl;
        dif+=x;
    }
    dif/=2;
    if(k>=dif){
        if(n%2==1){
            cout<<"YES"<<endl;
        }else{
            if(k%2==dif%2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}