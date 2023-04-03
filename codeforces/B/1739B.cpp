#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int d[n];
        int a[n];
        int suma=0;
        for(int i=0; i<n; i++){
            cin >>d[i];
            suma = suma + d[i];
            a[i] = suma;
        }
        int onlyone=1;
        for(int j=1; j<n; j++){
            if(a[j-1] >= d[j] && d[j]!=0){
                onlyone=0;
            }
        }
        if(onlyone==0){
            cout << -1;
        }else{
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
        }
        cout <<endl;
    }
}