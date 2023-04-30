#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define REP(i,a,b) for(int i=a; i<b; i++)
void solve(){
    char ans, A, B;
    string a, b;
    int la, lb;
    cin>>a>>b;
    la = a.length();
    lb = b.length();
    A = a[la-1];
    B = b[lb-1];
    if(A<B){
        ans = '>';
    }else if(A>B){
        ans = '<';
    }else{
        if(A == 'S'){
            if(la>lb){
                ans = '<';
            }else if(la<lb){
                ans = '>';
            }else{
                ans = '=';
            }
        }else{
            if(la>lb){
                ans = '>';
            }else if(la<lb){
                ans = '<';
            }else{
                ans = '=';
            }   
        }
    }
    cout<<ans<<endl;
}
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++){
        solve();
    }
}