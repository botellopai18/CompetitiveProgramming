#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int prime[25]={
    2 ,3 ,5 ,7 ,11,
    13,17,19,23,29,
    31,37,41,43,47,
    53,59,61,67,71,
    73,79,83,89,97,
};
int jala(int a, int b, int c){
    int A=a, B=b, C=c, ans=1;
    for(int i=0; i<25; i++){
        while(A%prime[i]==0 && C%prime[i]==0){
            A=A/prime[i]; C=C/prime[i];
            if(B%prime[i]==0){ B=B/prime[i]; }
            else{ ans=0; }
        }
    }
    return ans;
}
int main () {
    int t; cin >> t; while(t--){
        int n; cin >> n;
        int a[n], yes=1;
        for(int j=0; j<n; j++){ cin >> a[j]; }
        if(n>2){
            for(int i=0; i<n-2; i++){ yes=jala(a[i],a[i+1],a[i+2]); }   
        }
        if(yes==0){ cout << "NO" << endl;}
        else{ cout << "YES" << endl;}
    }
}