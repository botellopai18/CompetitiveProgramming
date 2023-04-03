//AC
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void solve(){
    int n; cin>>n;
    unordered_set<int> s[n];
    int k;
    for(int i=0; i<n; i++){
        cin>>k;
        int a=0;
        for(int j=0; j<k; j++){
            cin>>a;
            s[i].insert(a);
            for(int r=0; r<i; r++){
                s[r].erase(a);
            }
        }
    }
    int ans[n];
    bool find;
    for(int i=0; i<n; i++){
        find=false;
        for (auto x : s[i]) {
            ans[i]=x;
            find=true;
            break;
        }   
        if(!find){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}