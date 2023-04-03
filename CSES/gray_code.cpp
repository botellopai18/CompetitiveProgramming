#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int n; cin>>n;
    vector<int> s;
    s.pb(0);
    bool sent=true;
    for(int i=0; i<n; i++){
        //cout<<i<<endl;
        int tam=s.size();
        for(int j=1; j<=tam; j++){
            int a=s[tam-j]|(1<<i);
            s.pb(a);
            //cout<<a<<endl;
        }
    }
    for(int j=0; j<s.size(); j++){
        for(int k=n-1; k>=0; k--){
            (s[j]&(1<<k)) ? cout<<'1' : cout<<'0';
        }
        cout<<endl;
        //s[j] = s[j]<<1;
    }
}