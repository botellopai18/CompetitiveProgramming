#include <bits/stdc++.h>
// https://codeforces.com/contest/1749/problem/C
// 20oct22
//NOT DONE
#include <iostream>
using namespace std;
int main (){
    int t; cin>>t; while(t--){
        int n; cin>>n; int a[n], lili[n], c[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i]; 
            lili[i]=0;
        }
        for(int i=0; i<n; i++){
            lili[a[i]-1]++;
        }
        c[0]=0;
        for(int i=1; i<=n; i++){
            c[i]=c[i-1]+lili[i-1];
        }
        int ans;
        if(c[1]>0){
            ans=1;
            c[0]=1;
            while(2*ans-1<=c[ans-1] && c[1]>=1 ){
                ans++;
            }
            ans=ans-1;
        }else{
            ans=0;
        }
        
        cout<<ans<<endl;
    }
}