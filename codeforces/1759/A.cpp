/*
https://codeforces.com/contest/1759/problem/A
18nov22
Accepted c:
*/ 
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin>>t; while(t--){
        string s, m = "Yes"; cin>>s;
        int x = s.length(), y=3;

        while(y<=x+3){
            m += "Yes";
            y+=3;
        }

        if(-1 != m.find(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}