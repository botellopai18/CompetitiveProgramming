#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(a[0] == a[n-1]){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" "<<a[0]<<" ";
            for(int j=2; j<n; j++){
                cout<<a[n-j]<<" ";
            }
            cout<<endl;
        }
    }
}