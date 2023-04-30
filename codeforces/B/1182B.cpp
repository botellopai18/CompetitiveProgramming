// AC c:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve() {
    int h,w; cin>>h>>w;
    int a[h+2][w+2];
    int total=0;
    for(int i=0; i<h+2; i++) {
        for(int j=0; j<w+2; j++) {
            if(i==0 || j==0 || i==h+1 || j==w+1){
                a[i][j] = 0;
                continue;
            }
            char x; cin>>x;
            x=='.' ? a[i][j]=0 : a[i][j]=1;
            total+=a[i][j];
        }
    }
    int x=0,y=0;
    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++) {
            int n=0;
            n+=a[i][j];
            n+=a[i-1][j];
            n+=a[i+1][j];
            n+=a[i][j-1];
            n+=a[i][j+1];
            if(n==5){
                x=i; y=j;
                break;
            }
        }
    }
    if(x==0){
        cout<<"NO"<<endl;
        return;
    }
    int cnt=1;
    for(int i=x+1; i<=h; i++){
        if(a[i][y]==0) break;
        cnt+=a[i][y]; 
    }
    for(int i=x-1; i>0; i--){
        if(a[i][y]==0) break;
        cnt+=a[i][y]; 
    }
    for(int i=y+1; i<=w; i++){ 
        if(a[x][i]==0) break;
        cnt+=a[x][i]; 
    }
    for(int i=y-1; i>0; i--){ 
        if(a[x][i]==0) break;
        cnt+=a[x][i]; 
    }
    if(cnt<total){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main() {
    solve();
}