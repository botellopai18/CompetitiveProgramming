#include <bits/stdc++.h>
#include <iostream>

using namespace std;
long long f(long long k){
    long long kk;
    if(k==0){
        return 0;
    }else{
    kk=sqrt(k);
    return (kk-1)*3+(k-kk*kk-k%kk+kk)/kk;
    }
}
int main () {
    int t; cin >>t;
    while(t--){
        long long l,r;
        cin >> l >> r;
        long long lili=0;
        lili=f(r)-f(l-1);
        cout << lili<< endl;
    }
}