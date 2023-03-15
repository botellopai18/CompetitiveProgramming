//https://codeforces.com/contest/1744/problem/B
//16oct22
//DONE
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n,q; cin>>n>>q;
        int a[n], que[q][2],x,odd=0,even=0;
        long long sum=0,query=0;
        for(int i=0; i<n; i++){ 
            cin>>a[i]; sum+=a[i]; 
            if(a[i]%2==0){ even++; }
            else{ odd++; }
            }
        query=sum;
        for(int i=0; i<q; i++){ 
            cin>>que[i][0]>>que[i][1]; 
            if(que[i][0]==1){
                query+=odd*que[i][1];
                if(que[i][1]%2==1){ even=n; odd=0; }
            }else{
                query+=even*que[i][1];
                if(que[i][1]%2==1){ even=0; odd=n; }
            }
            cout<<query<<endl;
        }
    }
}