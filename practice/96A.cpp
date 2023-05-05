//AC
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin>>s;
    int cnt=1; char c=s[0];
    for(int i=1; i<s.length(); i++) {
        if(s[i]==c) cnt++;
        else{
            cnt=1; c=s[i];
        }
        if(cnt>=7){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    solve();
}