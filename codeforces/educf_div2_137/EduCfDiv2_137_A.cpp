// https://codeforces.com/contest/1743/problem/A
// 17oct22
// DONE C:
#include <bits/stdc++.h> 
#include <iostream> 
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int k; cin>>k; int a[k]; for(int i=0; i<k; i++){cin>>a[i];}
        long long ans; ans=(10-k)*(10-k-1)*3; cout<<ans<<endl;
    }
}