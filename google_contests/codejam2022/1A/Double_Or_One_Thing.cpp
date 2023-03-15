#include <bits/stdc++.h>
using namespace std;
string repeat(char a, int k) {
    string x="";
    for(int i=0; i<k; i++) {
        x+=a;
    }
    return x;
}
void solve(int t) {
    string s, lili = ""; cin>>s;
    s+="}";
    int n=s.length()-1, cnt=1;
    for(int i=0; i<n; i++) {
        if(s[i]==s[i+1]) {
            cnt++;
        }
        else if(s[i]>s[i+1] || i==n-1) {
            lili+=repeat(s[i], cnt);
            cnt=1;
        }
        else {
            lili+=repeat(s[i],2*cnt);    
            cnt=1;
        }
    }
    cout<<"Case #"<<t<<": "<<lili<<endl;
}
int main() {
    int T; cin>>T;
    for(int t=1; t<=T; t++) {
        solve(t);
    }
}