
// WA test 2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
       int n,ans; cin>>n;
       ans=(n+n%2)/2;
       cout<<ans<<endl;
        if(n%2==1){
            cout<<3*n-2<<" "<<3*n-1<<endl;
            ans--;
            n--;
        }//if n impar
        if(ans>=1){
            for(int i=0; i<ans; i++){
            int m=3*i, k=3*(n-i-1);
            cout<<m+2<<" "<<k+3<<endl;
        }// imprimir   
        }
    }//t cases
}//main