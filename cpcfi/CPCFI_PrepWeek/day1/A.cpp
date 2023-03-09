#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, l;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
        l = s.length();
        if(l<=10){
            cout<<s<<endl;
        }else{
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
    }
}