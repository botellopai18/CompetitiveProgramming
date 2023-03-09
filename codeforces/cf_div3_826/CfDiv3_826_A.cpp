// DONE C: 11oct22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int S(string x){
    int ans, tamx=x.size();
    if(x[tamx-1]=='M'){ ans=0; }
    if(x[tamx-1]=='S'){ ans=-tamx; }
    if(x[tamx-1]=='L'){ ans=tamx; }
    return ans;
}
int main (){
    int t; cin >> t; while(t--){
        string a, b; cin >> a >> b;
        int A=S(a), B=S(b);
        if(A>B){ cout << ">" << endl; }
        if(A==B){ cout << "=" << endl; }
        if(A<B){ cout << "<" << endl; }
    }
}