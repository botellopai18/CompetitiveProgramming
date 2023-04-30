#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int T, n, s, d, c;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>n;
        s=0;
        d=9;
        c=0;
        while(s+d<n){
            s+=d;
            d--;
            c++;
        }
        d++;
        cout<<n-s;
        for(int i=0; i<c; i++){
            cout<<d+i;
        }
        cout<<endl;
    }   
}