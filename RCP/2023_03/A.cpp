#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define LIMIT 1000000000
int main(){
    int n; cin>>n;
    ll x[n];
    unordered_set<ll> s;
    unordered_map<ll,ll> m;
    for(int i=0; i<n; i++){
        ll b; cin>>b;
        x[i]=b;
        s.insert(b);
        if(b>1){
            m[b]=b+1;
        }else{
            m[b]=1;
        }
    }
    vector<ll> a;
    ll row=3, tam=3;
    a.pb(1); a.pb(2); a.pb(1);
    while(a[2]<=LIMIT) {
        for(int i=1; a[tam-1]<=LIMIT; i++){
            if(i>=tam){
                a.pb(a[i]+a[i-1]);
            }else{
                a[i]+=a[i];
            }
            if(s.count(b)==1){
                m[b]=row;
                s.erase(b);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<m[x[i]]<<endl;
    }
}