#include <cstdio>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string letters = "abcdefghijklmnopqrstuvwxyz";
int main () {
    int t; cin >>t;
    while(t--){
        int n, k;
        scanf("%d %d\n",&n,&k);
        
        string books;
        getline(cin,books);
        
        int conter[25]={0,0,0,0,0,
                        0,0,0,0,0,
                        0,0,0,0,0,
                        0,0,0,0,0,
                        0,0,0,0,0};
                        
        int conter[25];
        for(int i=0; i<n; i++){
            for(int j=0; j<25; j++){
                if(books[i]==letters[j]){
                    conter[j]++;
                }
            }
        }
        string ans[k];
        int r=0;
        for(int cc=0; cc<k; cc++){
            if(conter[r]<(n/k)){
               ans[cc]=letters[r];
               conter[r]++;
            }else{
                r++;
            }
        }
        for(int i=k-1; i>=0; i--){
            cout << ans[i];
        }
        cout<<endl;
    }
}