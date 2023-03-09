// https://open.kattis.com/problems/cups
// DONE C: | 5nov22

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    char numbers[10]={'0','1','2','3','4','5','6','7','8','9'};
    int n; cin>>n;
    float rad[n]; string c[n];
    string a,b; int r;
    for(int i=0; i<n; i++){
        rad[i]=0;
        cin>>a>>b; r=0;
        while(r<10){
            if(a[0]==numbers[r]){
                r=11;
            }
            r++;
        } // a is color or number?
        if(r>=11){
            c[i]=b;
            float p10=1.0;
            for(int j=a.size()-1; j>=0; j--){
                r=0;
                while(r<10){
                    if(a[j]==numbers[r]){
                    rad[i]+=r*p10;
                    r=10;
                    }
                    r++;
                }
                p10*=10.0;
            }// for string a -> int rad[i]
            rad[i]=rad[i]/2.0;
        } // case a is number
        else{
            c[i]=a;
            float p10=1.0;
            for(int j=b.size()-1; j>=0; j--){
                r=0;
                while(r<10){
                    if(b[j]==numbers[r]){
                    rad[i]+=r*p10;
                    r=10;
                    }
                    r++;
                } //while Char-digit
                p10*=10.0;
            } // for string b ->int rad[i]
        } // case a is a color
    } // for n
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(rad[j]<rad[i]){
                float m=rad[i];
                rad[i]=rad[j];
                rad[j]=m;
                string l=c[i];
                c[i]=c[j];
                c[j]=l;
            }
        }
        cout<<c[i]<<endl;;
    } // sort and print
    cout<<c[n-1];
}// main