#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int abs(int k){
    if(k>=0){ return k; }else{ return -k; }
}
int main (){
    int T; cin >> T; while(T--){
        int n; cin >> n;
        int a[n], b[n], pos=0, aunos=0, bunos=0;
        for(int i=0; i<n; i++){ 
            cin >> a[i]; 
            if(a[i]==1){ aunos++; }
            }
        for(int i=0; i<n; i++){
            cin >> b[i]; 
            if(a[i]!=b[i]){ pos++; }
            if(b[i]==1){ bunos++; }
            }
        if(abs(aunos-bunos)>=pos){
            cout << abs(aunos-bunos) << endl;;
        }else{ cout << abs(aunos-bunos)+1 << endl; }
    }
}