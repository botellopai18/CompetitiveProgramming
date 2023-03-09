#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin>>t; while(t--){
        int n, k; cin>>n>>k;
        string lili = "YES";
        long long a, b, a1, b1, max=0, bb, sumb=0, cnt;
        cin>>a>>b;
        for(int i=1; i<n; i++){
            cin>>a1>>b1;
            if(a1>=max){ max = a1; bb = b1; }
            sumb += b1;
        }
        sumb -= bb;
        if(a<k){
            if(a>=k-b){
                if(max+sumb+b>=k){
                    
                }
            }
        }else{
            lili="YES";
        }
        cout<<lili<<endl;
    }
}