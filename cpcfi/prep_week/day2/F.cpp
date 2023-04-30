#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string ans="NO";
    int na, nb, k, m, x;
    cin>>na>>nb>>k>>m;
    vector<long long> a, b;
    for(int i=0; i<na; i++){
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<nb; i++){
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a[k-1]<b[nb-m]){
        ans="YES";
    }
    cout<<ans<<endl;
}