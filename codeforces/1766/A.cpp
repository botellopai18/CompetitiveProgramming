#include <iostream>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        int digits=0, pot10=1, lili;
        while(10*pot10 <= n){
            pot10 *= 10;
            digits ++;
        }
        lili = 1;
        while(lili * pot10 + pot10 <= n){
            lili ++;
        }
        lili += 9*digits;
        cout<<lili<<endl;
        
    }
}