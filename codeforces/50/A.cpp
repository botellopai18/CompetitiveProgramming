#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    if(n%2==0 || m%2==0){
        cout<<n*m/2<<endl;
    }else if(n%2==1){
        cout<<(m/2)+(n-1)*m/2<<endl;
    }else{
        cout<<(m/2)+(n-1)*n/2<<endl;
    }
}