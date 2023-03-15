// https://codeforces.com/contest/1744/problem/D
// 16oct22
//DONE
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        int a[n], dos[n], x, sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i]; x=a[i]; dos[i]=0;
            while(x%2==0){ x=x/2; dos[i]++; }
            sum+=dos[i];
        }
        int N=n,pot2=0,cnt=0,lili=0;
        int dosdos[21]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        if(n==1){
            if(sum>=1){cout<<0<<endl;}
            else{cout<<-1<<endl;}
        }else{
            while(N/2>=1){ cnt++; dosdos[cnt]+=N/2; dosdos[cnt-1]-=N/2; pot2+=N/2; N=N/2;}
            if(sum+pot2<n){ cout << -1 << endl; }
            else{
                N=n-sum;
                for(int i=20; i>=1; i--){
                    while(dosdos[i]>0 && N>=i){
                        N-=i; dosdos[i]--; lili++;
                    }
                }
                cout << lili << endl;
            }
        }
    }
}