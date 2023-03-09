/*
https://codeforces.com/contest/1759/problem/B
18nov22
Accepted c:
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin>>t; while(t--){
        int m, b, max=0;
        long long sum; 
        cin>>m>>sum;
        for(int i=0; i<m; i++){
            cin>>b;
            if(b>=max){
                max=b;
            }
            sum+=b;
        }
        sum *= 2;
        string ans = "Yes";
        
        while(max*(max+1) < sum){
            max++;
        }
        if(max*(max+1) > sum){
            ans = "No";
        }
        cout<<ans<<endl;
    }
}