#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, ans="YES";
    cin>>s;
    int l, cnt;
    l = s.size();
    cnt=0;
    for(int i=0; i<l; i++){
        if(s[i]==40){
            cnt++;
        }else{
            if(cnt==0){
                ans = "NO";
                break;
            }else{
                cnt--;
            }
        }
    }
    if(cnt!=0){
        ans = "NO";
    }
    cout<<ans<<endl;
}