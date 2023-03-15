// https://codeforces.com/contest/1749/problem/B
// 20oct22
// DONE C:
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main (){
    int t; cin>>t; while(t--){
        int n; cin>>n; int a[n],b[n], max=0;
        long long sum=0;
        for(int i=0; i<n; i++){cin>>a[i]; sum+=a[i];}
        for(int i=0; i<n; i++){cin>>b[i]; sum+=b[i]; if(b[i]>max){max=b[i];} }
        sum=sum-max; cout<<sum<<endl;
    }
}