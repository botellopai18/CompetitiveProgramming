// https://codeforces.com/gym/103274/problem/A
// 23 oct 22
// NOT DONE :C
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long heron(int a, int b, int c){
    int s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
long long techo(long long x, int k){
    if(x%k==0){ return x/k; }
    else{ return (x/k)+1; }
}
int main(){
    int b,n; cin>>b>>n;
    int bag[b][2], a,b,c;
    long long aT=0,min=0,kgT=0;
    for(int i=0; i<b; i++){
        cin>>bag[i][0]>>bag[i][1];
        min+=bag[i][1]; kgT+=bag[i][0];
    }
    
    string b1[1]="1";
    string b2[3]={"11","10","01"};
    string b3[7]={"111","110","101","100","011","010","001"};
    string b4[15]={"1111","1101","1011","1001","0111","0101","0011",
                   "1110","1100","1010","1000","0110","0100","0010","0001"};
    string b5[31]={"11111","11011","10111","10011","01111","01011","00111","11101",
                   "11001","10101","10001","01101","01001","00101","00011",
                   "11110","11010","10110","10010","01110","01010","00110","11100",
                   "11000","10100","10000","01100","01000","00100","00010","00001"};
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        aT+=heron(a,b,c);
    }
    long long cost=0, kg=0, kgneed;
    kgneed=(aT,30);
    if(kgT<kgneed){
        cout<<-1<<endl;
    }else{
    switch(b){
        case 1:
            for(int i=0; i<1; i++){
                cost=0; kg=0;
                for(int j=0; j<b; j++){
                    if(b1[i][j]=='1'){
                        cost+=bag[j][1]; kg+=bag[j][0];
                    }
                }
            }
            break;
        case 2:
            for(int i=0; i<3; i++){
                cost=0; kg=0;
                for(int j=0; j<b; j++){
                    if(b2[i][j]=='1'){
                        cost+=bag[j][1]; kg+=bag[j][0];
                    }
                }
                if(kg>=kgneed && cost<=min){ min= cost;}
            }break;
        case 3:
            for(int i=0; i<7; i++){
                cost=0; kg=0;
                for(int j=0; j<b; j++){
                    if(b3[i][j]=='1'){
                        cost+=bag[j][1]; kg+=bag[j][0];
                    }
                }
                if(kg>=kgneed && cost<=min){ min= cost;}
            }break;
        case 4:
            for(int i=0; i<15; i++){
                cost=0; kg=0;
                for(int j=0; j<b; j++){
                    if(b4[i][j]=='1'){
                        cost+=bag[j][1]; kg+=bag[j][0];
                    }
                }
                if(kg>=kgneed && cost<=min){ min= cost;}
            }break;
        case 5:
            for(int i=0; i<31; i++){
                cost=0; kg=0;
                for(int j=0; j<b; j++){
                    if(b5[i][j]=='1'){
                        cost+=bag[j][1]; kg+=bag[j][0];
                    }
                }
                if(kg>=kgneed && cost<=min){ min= cost;}
            }break;
    }
    cout<<min<<endl;
    }

}
