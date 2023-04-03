//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k; cin>>n>>k;
    string s1,s2, ans="YES"; cin>>s1>>s2;
    if(n<=k){
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }else{
        if(n<2*k){
            for(int i=n-k; i<=k-1; i++){
                if(s1[i]!=s2[i]){
                    //cout<<"dif";
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        int a[26];
        for(int i=0; i<26; i++){
            a[i]=0;
        }
        for(int i=0; i<n; i++){
            a[s1[i]-97]++;
            a[s2[i]-97]--;
        }
        for(int i=0; i<26; i++){
            if(a[i]!=0){
                //cout<<"cant ";
                cout<<"NO"<<endl;
                return;
            }
        }
        
    }
    cout<<"YES"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}