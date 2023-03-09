#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    long long pot2[11], ans=1, check[11], min[11], dos, a;
    for(int i=0; i<11; i++){
        pot2[i] = ans;
        ans *= 2;
    }
    int t; cin>>t; while(t--){
        int n, cnt; cin>>n;
        for(int i=0; i<11; i++){
            check[i] = 0;
            min[i] = 1;
        }
        for(int i=0; i<n; i++){
            cin>>a;
            dos=a;
            cnt = 10;
            while(cnt>=0){
                if(pot2[cnt]<=dos){
                    dos -= pot2[cnt];
                    check[cnt] = 1;
                }else{
                    min[cnt] = 0;
                }
                cnt--;
            }
        }
        ans = 0;
        for(int i=0; i<11; i++){
            ans += (check[i]-min[i])*pot2[i];
        }
        cout<<ans<<endl;
    }
}

