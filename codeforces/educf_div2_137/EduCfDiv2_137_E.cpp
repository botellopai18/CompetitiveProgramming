// https://codeforces.com/contest/1743/problem/E
// 17oct22
// NOT DONE :C WA test 5

#include <bits/stdc++.h> 
#include <iostream> 
using namespace std;
long long max(long long a, long long b){ if(a<=b){return b;} else{return a;} }
int main(){
    long long p1,p2,h,s,t1,t2, d1,d2,dd;
    long long time=0,kd,k1,k2,lili=0; 
    cin>>p1>>t1>>p2>>t2>>h>>s;
    d1=(p1-s); d2=(p2-s); dd=(p1+p2-s);
    kd=h/dd; k1=(h-kd*dd)/d1; k2=(h-kd*dd)/d2;
    if(t1!=t2){
        if((h-kd*dd)!=0){
            lili=h-kd*dd;
            if(t1<t2){
                time+=kd*t2;
                if(lili-k1*d1!=0){
                    if(k1*t1+t1<t2){
                        time+=k1*t1+t1;
                    }else{
                        time+=t2;
                    }
                }else{
                    if(k1*t1<t2){
                        time+=k1*t1;
                    }else{
                        time+=t2;
                    }
                }
            }else{
                time+=kd*t1;
                if(lili-k2*d2!=0){
                    if(k2*t2+t2<t1){
                        time+=k2*t2+t2;
                    }else{
                        time+=t1;
                    }
                }else{
                    if(k2*t2<t1){
                        time+=k2*t2;
                    }else{
                        time+=t1;
                    }
                }
            }
        }else{
            time+=kd*max(t1,t2);
        }
    }else{
        if(h-kd*dd!=0){
            time+=kd*t1+t1;
        }else{
            time+=kd*t1;
        }
    }
    cout<<time<<endl;
}