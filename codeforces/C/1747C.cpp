// https://codeforces.com/contest/1747/problem/C
// 4nov22
//DONE C:
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n;
        string lili="Bob"; 
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<a[0] && i>0){
                lili="Alice";
            }
        }
        cout<<lili<<endl;
    }//tcases
}