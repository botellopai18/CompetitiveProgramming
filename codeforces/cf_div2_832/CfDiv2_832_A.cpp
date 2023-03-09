#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        long long a,sum=0;
        for(int i=0; i<n; i++){
            cin>>a; 
            sum+=a;
        }
        long long lili;
        if(sum<0){ lili=-sum; }
        else{ lili=sum; }
        cout << lili << endl;
    }//t cases
}