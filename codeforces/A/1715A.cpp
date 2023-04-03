#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int k,n,m;
    cin >> n >> m;
    if (n<=m){
        if(n>1){
            k=2*(n-1)+m;             
        }else {
            if (m>1){
                k=m;
            }else k=0;
        }
    }else{
        if (m>1){
            k=2*m+n-2;
        }else k=n;
    }
cout << k<< endl;
}
}
