#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n, m; cin>>n>>m;
    int a, b=0, c=1;
    set<int> check[2];
    string lili="NO";
    for(int i=0; i<n; i++) {
        cin>>a;
        a=a%m;
        for(auto it:check[b]) {
            //cout<<i<<"-> "<<it<<" a:"<<a<<endl;
            int k=(it+a)%m;
            check[c].insert(it);
            check[c].insert(k);
        }
        check[c].insert(a);
        if(check[c].count(0)==1){
            lili="YES";
            break;
        }
        a = b; 
        b = c;
        c = a;
    }
    cout<<lili<<endl;
}