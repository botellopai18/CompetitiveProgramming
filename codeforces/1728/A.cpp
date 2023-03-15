// https://codeforces.com/contest/1728/problem/A
// 8-sep-2022
// DONE c:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; //number of colors
        cin >> n;
        int cnt[n];
        for(int i=0;i<n;i++){
            cin >> cnt[i];
        }
        int a=0;
        int color=0;
        for(int j=0; j<n; j++){
            if(cnt[j]>a){
                a=cnt[j];
                color=j;
            }
        }
        cout << (color+1) <<endl;
    }
}