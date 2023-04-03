#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,c;
        cin >>n >>c;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int x=0;
        int ahorro=0;
        for(int cont=0; cont<n-1; cont++){
            for(int i=cont+1; i<n; i++){
                if(a[i]<=a[cont]){
                    x=a[cont];
                    a[cont]=a[i];
                    a[i]=x;
                }
            }
        }
        int p=1;
        int r=0;
        int cost=0;
        for(int i=1; i<=n-1; i++){
            if(a[i]==a[i-1]){
                p=p+1;
                r=1;
            }else{
                if(p>=c){
                    p=c;
                }
                r=0;
            }
            if(r==0){
                cost=cost+p;
                p=1;
            }
        }
        if(p>=c){
            p=c;
        }
        cost=cost+p;
        cout << cost << endl;
    }
}