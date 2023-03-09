// 20oct22
// NOT DONE :C
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main (){
    int t; cin>>t; while(t--){
        int n,m; cin>>n>>m; int a[n][m], fil[n], col[m];
        for(int i=0; i<n; i++){
            fil[i]=0;
        }
        for(int j=0; j<m; j++){
            col[j]=0;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                fil[i]++;
                col[j]++;
            }
        }
        int lili=1;
        for(int i=0; i<n; i++){

        }
    }
}