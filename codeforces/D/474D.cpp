#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PP 1000000007
#define TAM 1000001
ll sum[TAM];
void sums(ll k) {
    sum[0]=0;
    for(ll i=1; i<k; i++) {
        sum[i]=i;
    }
    sum[k]=sum[k-1]+2;
    for(ll i=k+1; i<TAM; i++) {
        sum[i]=sum[i-1];
        sum[i]=(sum[i] + (sum[i-1]+PP-sum[i-2]) )%PP;
        sum[i]=(sum[i] + (sum[i-k]+PP-sum[i-k-1]) )%PP;
    }
}
int main() {
    ll t, k;
    cin>>t>>k;
    sums(k);
    sum[0]=0;
    while(t--) {
        ll a, b, lili=0;
        cin>>a>>b;
        //cout<<a<<" "<<b<<endl;
        lili=(sum[b]+PP-sum[a-1])%PP;
        //cout<<sum[b]<<" - "<<sum[a-1]<<endl;
        cout<<lili<<endl;
    }
}