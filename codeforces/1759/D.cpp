/*
https://codeforces.com/contest/1759/problem/D
18 nov 22
Accepted C:
*/
#include <iostream>
#include <math.h>
using namespace std;
int mayorP(long long a, int b){
        int p=0; 
        long long A = a;
        while(A%b==0){
            A = A/b;
            p++;
        }
        return p;
}
int main() {
    int t; cin>>t; while(t--){
        long long n, m, lili=1; cin>>n>>m;
        int p2, p5, m10;
        p2 = mayorP(n, 2);
        p5 = mayorP(n, 5);
        if(p2>p5){
            while(lili*5 <= m && p2 > p5){
                lili *= 5;
                p5++;
            }
        }else{
            while(lili*2 <= m && p5 > p2){
                lili *= 2;
                p2++;
            }
        }
        while(lili*10 <= m){
            lili*=10;
        }
        int c = lili;
        while(lili+c <= m){
            lili+=c;
        }
        cout<<n * lili<<endl;
    }
}