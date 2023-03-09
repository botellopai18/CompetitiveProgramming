// NOT DONE 11oct22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main () {
    int t; cin >> t; while(t--){
        int n; cin >> n; 
        int a[n], s[n];
        if(n==1){ cout << 1 << endl; }else{
            cin >> a[0]; s[0]=a[0];
            for(int i=1; i<=n-1; i++){
                cin >> a[i];
                s[i]=s[i-1]+a[i];
            }
            for(int j=n-2; j>0; j--){
                if(s[n-1]%s[j]==0){
                    while()
                }
            }   
        }
    }
}
