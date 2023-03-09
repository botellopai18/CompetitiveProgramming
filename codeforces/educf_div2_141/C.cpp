#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        long long n;
        long long m, sum=0;
        cin>>n>>m;
        long long a[n], o[n], s, ans, max;
        for(int i=0; i<n; i++){
            cin>>a[i];
            o[i] = a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=n-1; j>i; j--){
                if(o[j]<=o[j-1]){
                    s = o[j];
                    o[j] = o[j-1];
                    o[j-1] = s;
                }
            }
        }
        s=0;
        while(sum + o[s]<=m){
            sum += o[s];
            s++;
        }
        if(s==0){
            max = m;
        }else{
            max = o[s-1] + m-sum;
        }
        if(s>=n){
            ans = 1;
        }else{
            ans = n-s;
            if(a[s]>max){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}