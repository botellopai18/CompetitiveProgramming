#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    bool v[10001];
    int d[10001];
    queue<int> q;
    d[n]=0; v[m]=true;
    q.push(n);
    while(!q.empty()){
        int s=q.front(); q.pop();
        if(s==m){
            cout<<d[s]<<endl;
            break;
        }
        if(v[2*k]!=true && 2*k<10001){
            v[2*k]=true;
            d[2*k]=d[k]+1;
            q.push(2*k);
        }
        if(v[k-1]!=true && k>1){
            v[k-1]=true;
            d[k-1]=d[k]+1;
            q.push(k-1);
        }
    }
}