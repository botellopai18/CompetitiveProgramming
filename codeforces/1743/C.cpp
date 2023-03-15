// https://codeforces.com/contest/1743/problem/C
// 17oct22
// DONE C:
#include <bits/stdc++.h> 
#include <iostream> 
using namespace std;
int main(){
    int t,n; cin>>t;while(t--){
        cin>>n; string l; cin>>l; int a[n+1], li[n+2];
        long long total=0, quitar=0; 
        li[0]=0; a[0]=0; li[n+1]=0;
        for(int i=1; i<=n; i++){ 
            cin>>a[i];
            total+=a[i];
            if(l[i-1]=='1'){ li[i]=li[i-1]+1; } 
            else{ li[i]=0; quitar+=a[i]; }
        }
        int cnt=1,min=0,ii,iii; while(cnt<=n){
            if(li[cnt]>0){
                min=a[cnt-1]; ii=cnt-1; iii=cnt-1;
                while(li[cnt]>0){
                    if(a[cnt]<min){ min=a[cnt];ii=cnt; }
                    cnt++;
                }
                if(ii!=iii){quitar-=a[iii]; quitar+=min; } 
            }else{
                cnt++;
            }
        }
        cout<<total-quitar<<endl;
    }
}