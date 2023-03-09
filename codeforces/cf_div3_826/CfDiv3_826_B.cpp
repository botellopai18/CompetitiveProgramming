// DONE C: 11oct22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main (){
    int t,n; cin >> t; while (t--){
        cin >> n;
        if(n>=4){
            cout << n << " " << n-1 << " ";
            for(int i=1; i<n-2; i++){ cout << i << " ";} cout << n-2 << endl;
        }else{
            if(n==3){ cout << -1 << endl; }
            else{ cout << 2 << " " << 1 << endl;}
        }
    }
}