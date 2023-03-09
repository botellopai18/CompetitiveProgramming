// https://codeforces.com/contest/1750/problem/F#
// NOT DONE :C 6nov22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n; long long m; cin>>m;
     long long lili=0;
    if(n<=2){ lili=1; }
    else{
        long long potn1=1;
        long long ci[n][n];
        ci[0][0]=1; 
        for(int i=1; i<n; i++){
            potn1=potn1*2;
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){ ci[i][j]=1; }
                else{
                    ci[i][j]=ci[i-1][j-1] + ci[i-1][j];
                }
            }
        }
   
        potn1 = potn1/4;
        lili+=potn1%m;
        int piso2 = n/2;
        if(n%2==1){
            lili+=ci[n-2][piso2]%m;
        }else{
            lili+=((piso2-1)*ci[n-2][piso2-1])%m;
            lili+=ci[n-2][piso2]%m;
        }   
    }
    cout<<lili<<endl;

}//main