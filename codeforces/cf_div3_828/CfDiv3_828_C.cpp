// https://codeforces.com/contest/1744/problem/C
// 16oct22
//WA :C
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n; char yo; string s; cin>>n>>yo>>s;
        int maxr=0,maxy=0,cr=0,cy=0,ultr=0,ulty=0,primerg=0,cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='g'){
                if(cnt==0){ primerg=i; cnt++; }
                cr++; cy++;
                if(cr>maxr){ maxr=cr; }
                if(cy>maxy){ maxy=cy; }
                cr=0;cy=0;
            }else{
                if(s[i]=='r'){cr=0; cy++; ultr=i; }
                else{ cy=0; cr++; ulty=i; }
            }
        }
        int kkr=0, kky=0;
        if(kkr==0){ if(n-ultr+primerg>maxr){ maxr=n-ultr+primerg; }}
        if(kky==0){ if(n-ulty+primerg>maxy){ maxy=n-ulty+primerg; }}
        if(yo=='r'){cout << maxr << endl;}
        if(yo=='y'){ cout<<maxy<<endl;}
        if(yo=='g'){cout<<0<<endl;}
    }
}