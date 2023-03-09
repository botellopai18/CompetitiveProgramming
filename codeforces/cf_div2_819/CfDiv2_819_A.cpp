// Codeforces Div 2. Round 819.Problem A
// https://codeforces.com/contest/1726/problem/A
// Problem solved
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max=a[0];
    int min=a[0];
    int dif=0;
    int r;
    for(int i=1; i<n; i++){
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
        if ( (a[i-1]-a[i]) > dif ){
            dif = a[i-1]-a[i];
        }
    }
    r=dif;
    if( (max-a[0]) > r ){
        r = max-a[0];
    }
    if( (a[n-1]-min) > r ){
        r = a[n-1]-min;
    }
    cout << r <<endl;
    }
}