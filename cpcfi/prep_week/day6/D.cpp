#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    int n, k, passF, passL, ans1=0, ans2=0;
    cin>>n>>k;
    passL=0;
    passF=100;
    vector<int> tam;
    string p[n], pass;
    for(int i=0; i<n; i++){
        cin>>p[i];
        tam.push_back(p[i].length());
    }
    cin>>pass;
    sort(tam.begin(), tam.end());
    for(int i=0; i<n; i++){
        if(tam[i]==pass.length()){
            passF=min(passF, i);
            passL=max(passL, i);
        }
    }
    ans1=passF+1+((passF-passF%k)/k)*5;
    ans2=passL+1+((passL-passL%k)/k)*5;
    //cout<<passF<<" "<<ans1<<endl;
    //cout<<passL<<" "<<ans2<<endl;
    cout<<ans1<<" "<<ans2<<endl;
}   
int main(){
    solve();
}