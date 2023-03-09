// https://open.kattis.com/problems/autori
// DONE C: | 5nov22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string s; getline(cin,s); int k=s.size();
    cout<<s[0];
    int cnt=1;
    while(cnt<k-1){
        if(s[cnt]=='-'){
            cout<<s[cnt+1];
        }
        cnt++;
    }
}