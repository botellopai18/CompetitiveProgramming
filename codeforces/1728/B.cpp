// https://codeforces.com/contest/1728/problem/B
// 8-sep-2022
// DONE c:
#include <bits/stdc++.h>
using namespace std;

int main() //{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        if(n%2==0){
            for(int i=0; i<n-2; i++){
                a[i]=n-(i+2); //n=8 | 6,5,4,3,2,1,7,8 | 6,0,4,0,2,0,7,15
                          // n=4| 2,1,3,4 | 2,0,3,7
            }
            a[n-2]=n-1;
            a[n-1]=n;
        }
        if(n%2==1){
            a[0]=1;
            for(int i=1; i<n-2; i++){
                a[i]=n-(i+1);  // n= 9 | 1,7,6,5,4,3,2,8,9 | 1,8,0,5,0,3,0,8
            }
            a[n-2]=n-1;
            a[n-1]=n;
        }
        for(int j=0; j<n; j++){
            cout << a[j] << "\n";
        }
    }
}
