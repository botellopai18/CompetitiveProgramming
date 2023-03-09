// https://open.kattis.com/contests/uhbjch/problems/reversebinary
// DONE C: | 5nov22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    long long p2[33]; p2[0]=1;
    for(int i=1; i<33; i++){
        p2[i]=p2[i-1]*2;
    }
    int cont=32;
    while(n<p2[cont]){
        cont--;
    }
    int m=cont;
    long long nn=n,lili=0;
    while(cont>=0){
        if(nn>=p2[cont]){
            lili+=p2[m-cont];
            nn=nn-p2[cont];
        }
        cont--;
    }
    cout<<lili;
}