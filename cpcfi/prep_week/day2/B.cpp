#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n, q, is, d, k;
    cin>>n>>q;
    int a[n];
    is=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            is++;
        }
    }
    for(int i=0; i<q; i++){
        cin>>d>>k;
        if(d==2){
            if(k>is){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
            }
        }else{
            if(a[k-1]==1){
                a[k-1] = 0;
                is--;
            }else{
                a[k-1] = 1;
                is++;
            }
        }
    }
}