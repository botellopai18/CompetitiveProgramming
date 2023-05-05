//AC45
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    if(n%3==1) cout<<4<<" "<<n-4<<endl;
    else if(n%3==2) cout<<8<<" "<<n-8<<endl;
    else cout<<6<<" "<<n-6<<endl;
}