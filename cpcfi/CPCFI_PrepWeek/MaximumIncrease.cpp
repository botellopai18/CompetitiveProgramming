// https://codeforces.com/problemset/problem/702/A
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PB push_back
#define fori(i,a,b) for(int i=a; i<b; i++)

ll check(ll a[], ll in, ll fi);
ll find(ll b[], ll In, ll Fin, ll ra);
int main(){
    int T; T=1;
    fori(t,0,T){
        ll ans, n;
        cin>>n;
        ll a[n];
        fori(i,0,n){
            cin>>a[i];
        }
        ans = find(a, 0, n-1, 1);
        //ans = check(a, 0, 1);
        cout<<ans;
    }
}
ll check(ll a[], ll in, ll fi){
    int cnt=in, m=fi-in+1, r=1;
    while(cnt<fi){
        if(a[cnt]>=a[cnt+1]){
            m = 0;
            break;
        }else{
            r++;
            cnt++;
        }
    }
    return r;
}
ll find(ll b[], ll In, ll Fin, ll ra){
    int k=check(b, In, Fin);
    if(){
        k = max(find(b, In+1, Fin), find(b, In, Fin-1));
        //printf("!");
    }
    return k;
}