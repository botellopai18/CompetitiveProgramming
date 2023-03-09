// https://codeforces.com/problemset/problem/1567/B
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    int a, bi, b, p2; cin>>a>>bi;
    b = bi%10;
    p2=1;
    while(bi!=0){
        bi = (bi-bi%10)/10;
        p2*=2;
        b+=p2*bi%10;
    }
    cout<<b<<endl;
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}