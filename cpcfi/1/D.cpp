#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;
typedef long long ll;

void solve(){
    
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ans=0, cnt=0, difa=0, difb=0;
        multiset<char> sa, sb;
        for(int i=0; i<n; i++)
        {
            if(sb.count(s[i])==0){
                difb++;
            }
            sb.insert(s[i]);
        }
        for(int i=0; i<n-1; i++){
            if(sa.count(s[i])==0) difa++;
            sa.insert(s[i]);
            sb.erase(sb.find(s[i]));
            if(sb.count(s[i])==0) difb--;
            if(difa+difb>ans){
                ans=difa+difb;
            }
            //cout<<s[i]<<sa.count(s[i])<<","<<sb.count(s[i]);
            //cout<<" "<<difa<<","<<difb<<" "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}