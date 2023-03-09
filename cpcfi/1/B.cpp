// https://codeforces.com/group/qhNeDJ317x/contest/428227/problem/B
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++)
    {
        int n; cin>>n;
        string s; cin>>s;
        string ans="NO";
        int x=0,y=0;
        for(int i=0; i<s.length(); i++)
        {
            switch(s[i])
            {
                case(68)://D
                    y--;
                    break;
                case(85)://U
                    y++;
                    break;
                case(82)://R
                    x++;
                    break;
                case(76)://L
                    x--;
                    break;
                default:
                    break;
            }
            if(x==1 && y==1)
            {
                ans="YES";
                break;
            }
        }
        //cout<<x<<","<<y<<" ";
        cout<<ans<<endl;
    }
}