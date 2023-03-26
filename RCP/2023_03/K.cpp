// WA
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<pair<int,int>> v;
    map<int> m;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        v.push_back( make_pair(a,b) );
        m[a]!=0 ? m[a]++ : m[a]=1;
    }
    sort(v.begin(), v.end());
    int cnt=0; ll ans1=0, ans=0;
    bool q=true;
    for(int i=0; i<m.size(); i++){
        int x1=v[cnt].first;
        int cant1=m[x1];
        int down1=v[cnt].second;
        int top1=v[cnt+cant1-1].second;
        cnt+=w;
        int x2=v[cnt].first;
        int cant2=m[x2];
        int down2=v[cnt].second;
        int top2=v[cnt+cant2-1].second;
        if(q){
            ans1+=x2-x1;
            if()
            ans1+=abs(top2-down1);
            ans+=top1-down1
        }else{

        }
    }
}