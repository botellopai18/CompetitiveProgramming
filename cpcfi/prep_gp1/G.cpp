//DONE C:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    //ool win[n+1] = {false};
    int i=0;
    while(i<n){
        int ones=__builtin_popcount(i);
        //cout<<i<<" "<<ones<<endl;
        if(ones%2==1){
            i++;
        }else{
            i+=m+1;
        }
    }
    if(i==n){
        cout<<"Free snacks!"<<endl;
    }else{
        cout<<"Pay the bill"<<endl;
    }
}