//possible AC
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector <string> v;
    string s;
    for(int i =0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    int q;cin>>q;
    int op,ans;
    for(int i=0;i<q;i++){
        ans=0;
        cin>>s;
        if(s.length()<9){
            for(int j=0;j<v.size();j++){
                op=1;
                for(int k=0;k<9;k++){
                    //cout<<s[k]<<" "<<v[j][k]<<endl;
                    if(s[k]=='*'){
                        k+=9-s.size();
                    } else if(s[k]!=v[j][k]){
                        op=0;
                        break;
                    }
                }
                if(op==1){
                    ans++;
                }
            }
            cout<<ans<<endl;
        } else{
            for(int j=0;j<v.size();j++){
                op=1;
                for(int k=0;k<9;k++){
                    //cout<<s[k]<<" "<<v[j][k]<<endl;
                    if(s[k]!=v[j][k] && s[k]!='?'){
                        op=0;
                        break;
                    }
                }
                if(op==1){
                   ans++;
                }
            }   
            cout<<ans<<endl;
        }
    }
}