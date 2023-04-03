#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            a[i][0]=1;
            a[i][i]=1;
            for(int j=1;j<i;j++){
                    a[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cout << a[i][j] << ' ';
            }
            if( i != n-1){
                cout << '\n';
            }
        }
        cout<<endl;
    }
}