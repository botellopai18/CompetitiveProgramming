//NOT DONE :C
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


void solve(){
    int n, k, d;
    cin>>n>>k>>d;
    int cnt[n];
    vector<vector<int>> c;
    vector<int> p;
    vector< pair <int, int> > roads;
    deque<int> path;
    for(int i=0; i<k; i++){
        int police;
        cin>>police;
        p.push_back(police);
    }
    for(int i=0; i<n; i++){
        cnt[i]=0;
    }
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        path.push_back(v);
        path.push_front(u);
    }

}
int main(){
    solve();
}