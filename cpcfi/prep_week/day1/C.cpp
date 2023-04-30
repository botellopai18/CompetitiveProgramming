#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int T, a, b, ans;
    cin>>T;
    for(int t=0; t<T; t++){
        ans=0;
        cin>>a;
        for(int i=0; i<3; i++){
            cin>>b;
            if(b>a){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}