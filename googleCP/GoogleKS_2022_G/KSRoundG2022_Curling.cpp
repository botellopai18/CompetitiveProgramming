//https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb2e1/0000000000c17c82#problem
//15oct22
//Wrong Answer test2
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
float dist(int a, int b){ return sqrt(a*a+b*b); }
int main(){
    int T; cin>>T; for(int t=1; t<=T; t++){
        int lili=0;
        int Rdisk, Rhouse,n,m; cin>>Rdisk>>Rhouse;
        cin>>n; int red[n][2];
        float redD[n],redMin=40000;
        for(int i=0; i<n; i++){
            cin>>red[i][0]>>red[i][1]; 
            redD[i]=dist(red[i][0],red[i][1]);
            if(redD[i]<redMin){ redMin=redD[i]; }
        }
        cin>>m; int yellow[m][2];
        float yellowD[n], yellowMin=40000;
        for(int i=0; i<m; i++){
            cin>>yellow[i][0]>>yellow[i][1];
            yellowD[i]=dist(yellow[i][0],yellow[i][1]);
            if(yellowD[i]<yellowMin){ yellowMin=yellowD[i]; }
        }
        if(n==0 || m==0){
            if(n==0){
                for(int i=0; i<m; i++){
                    if(yellowD[i]-Rdisk<=Rhouse){lili++;}
                }
                cout<<"Case #"<<t<<": "<<0<<" "<<lili<<endl;
            }else{
                for(int i=0; i<n; i++){
                    if(redD[i]-Rdisk<=Rhouse){lili++;}
                }
                cout<<"Case #"<<t<<": "<<lili<<" "<<0<<endl;
            }
        }
        else{
            float x, 
            lili=0;
            if(redMin<yellowMin){
                for(int i=0; i<n; i++){
                    x=redD[i]-Rdisk;
                    if(redD[i]<yellowMin){
                        if(x<=Rhouse){lili++;}
                    }
                }
                cout<<"Case #"<<t<<": "<<lili<<" "<<0<<endl;
            }else{
                for(int i=0; i<m; i++){
                    x=yellowD[i]-Rdisk;
                    if(yellowD[i]<redMin){
                        if(x<=Rhouse){lili++;}
                    }
                }
                cout<<"Case #"<<t<<": "<<0<<" "<<lili<<endl;
            }
        }
    }
}