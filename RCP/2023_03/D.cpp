//possible AC
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int p=0, q=0;
    for(int i=1; i<s.size(); i++){
        //cout<<i<<s[i]<<endl;
        if(s[i]==s[i-1]) { 
            if(s[i]==43) p++;
            else q++;
        }
    }
    cout<<max(p,q)<<endl;
}