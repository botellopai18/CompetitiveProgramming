#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
        } 
        int po[n];
        int f;
        for(int x=n-1; x>=0; x--){
            po[x]=0;
            f=0;
            for(int j=0; j<n; j++){
                if(p[j]>=po[x]){
                    po[x]=p[j];
                    f=j;
                }
            }
            p[f]=0;
        }
        int sum;
        if( po[0] -po[2] >=0){
            sum = po[0] -po[2];
        }else{
            sum = po[2] - po[0];
        }
        for(int k=1; k<=(n-3); k++){
            if( po[k]-po[k+2] >= 0){
                if( (po[k]-po[k+2]<sum) ){
                sum = po[k]-po[k+2];
            }
            }else{
                if( (po[k+2]-po[k]<sum) ){
                sum = po[k+2]-po[k];
            }
            }
        }
        cout << sum <<endl;
    }
}