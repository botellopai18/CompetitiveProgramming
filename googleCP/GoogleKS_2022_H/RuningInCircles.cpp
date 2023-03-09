// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb1b6/0000000000c4766e
// 11 nov 22 
// DONE Test1 Test2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int T; 
    cin >> T; 
    for(int t=1; t<=T; t++){
        long long l,n; cin>>l>>n;
        long long dis,cnt=0,laps=0,m; 
        char d1,d2;
        long long r=0,sum=0; //distance from the starting line
        cin>>dis>>d1;
        r+=dis; sum+=dis;
        if(r>=l){
            m = r/l;
            laps+=m;
            r-=l*m;
        }
        cnt++;
        while(cnt<n){
            cin>>dis>>d2;
            if(d2==d1 || r==0){ r+=dis; d1=d2;}
            else{ r-=dis; }
            if(r<0){ d1=d2; r=(-1)*r; }
            if(r>=l){
                m=r/l;
                laps+=m;
                r -= l*m;
            }
            cnt++;
        }
        cout<<"Case #"<<t<<": "<<laps<<endl;
    }
}