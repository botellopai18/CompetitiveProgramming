//https://codeforces.com/group/qhNeDJ317x/contest/428227/problem/A
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++)
    {
        char a; cin>>a;
        string c="codefrs", ans="NO";
        for(int i=0; i<7; i++){
            if(a==c[i]){
                ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
}