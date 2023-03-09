#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string p;
        cin >> p;
        int cont=0;
        string num = "0123456789";
        while(p[cont]!='\0'){
            cont++;
        }
        int many[10]={0,0,0,0,0, 0,0,0,0,0};
        int k;
        for(int i=0; i<cont; i++){
            k=0;
            while (num[k]!=p[i]){
              k++;  
            }
            many[k]++;
        }
        int pos=0;
        for(int i=0; i<=8; i++){
            while(p[pos]==i){
                cout<<i;
                pos++;
                many[i]=many[i]-1;
            }
            for(int j=0; j<many[i]; j++){
                cout<<i+1;
            }
        }
        for(int j=0; j<many[9]; j++){
                cout<<9;
            }
            cout << endl;
    }
}