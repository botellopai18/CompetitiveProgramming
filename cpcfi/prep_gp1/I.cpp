//done C:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    ll n,k, t;  cin>>n>>k>>t;
    ll pos[n], total=0;
    cin>>pos[0];
    if(n==1){
        cout<<-1<<endl;
    }
    for(int i=1; i<n; i++) {
        cin>>pos[i];
        pos[i]-=pos[0];
        total-=pos[i];
    }

    bool find=false;
    total+=n*pos[n-1];
    //cout<<total<<endl;
    pos[0]=0;
    ll mm=0, in, fin;
    ll cnt=0, sum=0;
    for(int i=0; i<n; i++){
        if(cnt<i) cnt=i;
        while(sum<=k){
            cnt++;
            sum = pos[cnt]-pos[i];
            if(cnt>=n) break;
        }
        cnt--;
        sum = pos[cnt]-pos[i];
       
        if(t<sum){
            if(mm < (sum-t)*(i+1)){
                find=true;
                mm = (sum-t)*(i+1);
                in = i+1; fin = cnt+1;
                //cout<<in<<" "<<fin<<" "<<mm<<" = "<<sum<<"-"<<t*(i+1)<<endl;
            }
        }
    }
    if(find){
        cout<<in<<" "<<fin<<" "<<total-mm<<endl;
    }else{
        cout<<-1<<endl;
    }
}
int main() {
    solve();
}