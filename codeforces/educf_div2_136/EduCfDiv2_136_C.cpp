#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int a(int k,int kfact, int k2fact){
    if(k>4){
        if(k%4==2){
            int res;
            kfact=kfact/k;
            k2fact=k2fact/(k/2);
            res=kfact/k2fact*k2fact;  
            return   res + b(k-2);     
        }else {
            int res;
            kfact=kfact/k;
            k2fact=k2fact/(k/2);
            res=kfact/k2fact*k2fact;
            kfact=kfact/((k-2)(k-3));
            k2fact=k2fact/( ((k/2)-1)*((k/2)-2) );
            res=kfact/k2fact*k
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin >>n;
        int a, b, d, fact, fact2;
        if(n>4){
            a=3;
            b=2;
            d=1;
            if(n%4==2){
                fact=2; //2!
                fact2=1; //1!
                for(int i=6; i<=n; i+=4){ // fact2=(i/2)!, fact=i!
                    fact=fact*(i-3)*(i-2)*(i-1)*i;
                    fact2=fact2*((i/2)-1)*(i/2);
                    int i2=i/2;
                    int x=a;
                    a=b+( fact/i )/( fact2*fact2/(i2*i2) );
                    b=x+( fact/(i*(i-1)) )/( fact2*fact2/( i2*i2*(i2-1)*(12-1) ) );
                }
            }else{
                fact=24;
                fact2=2;
            }
        }
    }
}