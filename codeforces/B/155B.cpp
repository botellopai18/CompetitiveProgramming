//done
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    int n; cin>>n;
    vector<int> zero;
    int cnt=1, points=0;
    for(int i=0; i<n; i++) {
        int a,b; cin>>a>>b;
        if(b==0) {
            zero.pb(a);
        }
        else {
            points+=a;
            cnt+=b-1;
        }
    }
    sort(zero.rbegin(), zero.rend());
    for(int i=0; i<zero.size(); i++) {
        if(cnt==0) break;
        cnt--;
        points+=zero[i];
    }
    cout<<points<<endl;
}