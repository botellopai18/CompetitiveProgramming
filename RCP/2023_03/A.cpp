//possible AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define LIMIT 1000
unordered_map<ll, int> v;

void create(){
    v[1]=1;
    int row=1;
    ll a[10000], last, next, i, cnt=0;
    a[0]=0; a[1]=1; a[2]=0; a[3]=0; a[4]=0; a[5]=0;
    while(a[4]<=LIMIT){
        //cout<<row<<endl;
        i=1;
        row++;
        a[row+1]=0;
        last=0; next=0;
        while(i){
            cnt++;
            last=next;
            next=a[i];
            a[i]+=last;
            //cout<<a[i]<<" ";
            if(!v.count(a[i])){
                v[a[i]]=row; 
            }
            if(a[i]>LIMIT || i==row){
                break;
            }
            i++;
        }
        //cout<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    create();
    int n; cin>>n;
    for(int i=0; i<n; i++){
        ll a; cin>>a;
        if(v[a]==0){
            ll x=sqrt(2*a);
            x*x+x==2*a ? v[a]=x+2 : v[a]=a+1;
        }
        cout<<v[a]<<endl;
    }
}