//AC
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; 
    while(t--){
        string s; cin>>s;
        int a[4]={0,0,0,0};
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(s[j]==s[i]) a[i]++;
            }
        }
        int ans=-1;
        sort(a, a+4);
        if(a[0]==4){
            ans=-1;
        }else if(a[0]==2){
            ans=4;
        }else{
            if(a[1]==1){
                if(a[2]==2){
                    ans=4;
                }else{
                    ans=4;
                }
            }else{
                ans=6;
            }
        }
        cout<<ans<<endl;
    }
}