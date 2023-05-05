//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int valid(int n) {
    int num=0;
    int a=n%10, b=(n-100-b)/10;
    if(a<=1 || a==8){
        num=100+10*a;
    }else if (a==2){
        num=150;
    }else if (a==3 || a==4 || a==7 || a==6 || a==9){
        return -1;
    }else {
        num=120;
    }

    if(b<=1 || b==8){
        num+=b;
    }else if (b==2){
        num+=5;
    }else if (b==3 || b==4 || b==7 || b==6 || b==9){
        return -1;
    }else {
        num+=2;
    }
    return num;
}
void print(int fi, int se) {
    int a,b;
    b=fi%10; a=(fi-100-b)/10;
    cout<<a<<b<<":";
    b=se%10; a=(se-100-b)/10;
    cout<<a<<b<<endl;
}
void solve() {
    int h,k; cin>>h>>k;
    string s; cin>>s;
    int n=100,m=100;
    n+=(s[0]-48)*10 + (s[1]-48);
    m+=(s[3]-48)*10 + (s[4]-48); 
    //cout<<n<<" "<<m<<" ";
    //cout<<valid(n)<<" "<<valid(m)<<" ";
    
    if(valid(n)!=-1 && valid(n)<100+k){
        for(int i=m; i<100+k; i++){
            if(valid(i)<100+h && valid(i)!=-1){
                print(n, i);
                return;
            }
        }
    }
    for(int i=n+1; i<100+h; i++){
        if(valid(i)<100+k && valid(i)!=-1){
            print(i, 100);
            return;
        }
    }
    print(100, 100);
    
}
int main() {// 1->1, 2->5, 5->2, 6->9, 8->8, 9->6, 0->0
    int t; cin>>t;
   
    while(t--) {
        solve();
    }
}