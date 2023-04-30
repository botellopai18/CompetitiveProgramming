#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


void solve(){
    ll n, wk, ni=0, ne=0, curri, in, e;
    cin>>n;
    vector< pair <ll,ll> > w;
    stack<ll> intro;
    for(int i=0; i<n; i++){
        cin>>wk;
        w.push_back(make_pair(wk, i));
    }
    sort(w.begin(), w.end());
    string s;
    cin>>s;
    for(int i=0; i<2*n; i++){
        if(s[i]=='0'){
            in = w[ni].second;
            intro.push(w[ni].second);
            cout<<in+1<<" ";
            ni++;
        }else{
            e=intro.top();
            intro.pop();
            cout<<e+1<<" ";
            ne++;
        }
    }
}
int main(){
    solve();
}