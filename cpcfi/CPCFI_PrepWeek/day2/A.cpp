#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n, m, a, b, maxA, maxB;
    cin>>n;
    maxA=0;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a>maxA){
            maxA = a;
        }
    }
    cin>>m;
    maxB=0;
    for(int i=0; i<m; i++){
        cin>>b;
        if(b>maxB){
            maxB = b;
        }
    }
    cout<<maxA<<" "<<maxB<<endl;
}