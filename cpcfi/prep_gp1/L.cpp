//DONE C:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    ll n; cin>>n;
    string fin="";
    while(k!=1){
        if(k%2==1){
            cout<<"(2*";
            fin = ")"+fin;
            k--;
        }else{
            cout<<"(";
            fin = ")^2"+fin;
            k/=2;
        }
    }
    cout<<"2"<<fin<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}