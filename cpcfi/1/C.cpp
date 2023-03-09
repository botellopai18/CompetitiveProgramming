//Accepted
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ans=n;
        for(int i=0; i<n/2; i++){
            if(s[i]==s[n-i-1]){
                break;
            }else{
                ans-=2;
            }
        }
        cout<<ans<<endl;
    }
}