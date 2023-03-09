#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int t=0; t<T; t++){
        string s, ans;
        int l, z=0, u=0, m;
        cin>>s;
        l = s.size();
        for(int i=0; i<l; i++){
            if(s[i]==48){
                z++;
            }else{
                u++;
            }
        }
        m=min(z,u);
        if(m%2==1){
            ans="DA";
        }else{
            ans="NET";
        }
        cout<<ans<<endl;
    }
}