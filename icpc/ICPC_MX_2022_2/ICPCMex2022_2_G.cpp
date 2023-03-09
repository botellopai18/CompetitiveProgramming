// https://codeforces.com/gym/103940/problem/G
// 13oct22
// Error at 76 test
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int min(int a, int b){
    if(a<=b){ return a; }
    else{ return b ;}
}
int max(int a, int b){
    if(a>=b){ return a; }
    else{ return b; }
}
int main (){
    int n; cin >> n;
    int dis[n], wait[n]; dis[0]=0;
    int go[n][2], back[n][2];
    for(int i=1; i<n; i++){ cin >> dis[i]; }
    for(int i=0; i<n; i++){ cin >> wait[i]; }
    go[0][0]=0; go[0][1]=wait[0];
    back[n-1][0]=0; back[n-1][1]=wait[n-1];
    for(int i=1; i<n; i++){
        go[i][0]=go[i-1][1]+dis[i]; go[i][1]=go[i][0]+wait[i];
        back[n-i-1][0]=back[n-i][1]+dis[n-i]; back[n-i-1][1]=back[n-i-1][0]+wait[n-i-1];
    }  
    int cnt=0;
    while(go[cnt][1]<=back[cnt][0]){ cnt++; }
    int arr=max(go[cnt][0],back[cnt][0]);
    int leav=min(go[cnt][1],back[cnt][1]);
    if(arr<leav && back[cnt][1]>go[cnt][0]){ cout << leav-arr; }
    else{ cout << 0; }
}