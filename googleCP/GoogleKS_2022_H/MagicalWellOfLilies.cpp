// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb1b6/0000000000c47e79
// 11 nov 22
// Successful TestSet1 and TestSet2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int  main(){
    int dp[500001][2];
    for(int i=0; i<=12; i++){
        dp[i][0] = i;
        dp[i][1] = 0;
    }
    for(int j=13; j<=500000; j++){
        int k, min, c, exp;
        min = dp[j-1][0] + 1;
        c = dp[j-1][1];
        for(int r=2; r<=6; r++){
            if(j%r==0){
                k=j/r;
                exp = (dp[k][0] + 2*r + 2);
                if(exp < min){
                    min = exp;
                    c = dp[k][1];
                }
            }
        }
        dp[j][0] = min;
        dp[j][1] = c;
    }
    int T; cin>>T;
    for(int t=1; t<T; t++){
        int n; cin>>n;
        cout<<"Case #"<<t<<": "<<dp[n][0]<<endl;
    }
}