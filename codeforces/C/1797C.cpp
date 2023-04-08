//AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve() {
    int n,m; 
    scanf("%d %d", &n,&m);
    fflush(stdout);
    int a, b, c;
    printf("\n? 1 1\n");
    fflush(stdout);
    scanf("%d", &a);
    fflush(stdout);
    if(a==0){
        printf("\n! 1 1\n");
        fflush(stdout);
        return;
    }
    printf("\n? %d %d\n", n, m);
    fflush(stdout);
    scanf("%d", &b);
    fflush(stdout);
    if(m-b==1+a){
        if(n-b==1+a){
            printf("\n! %d %d\n", 1+a, 1+a);
            fflush(stdout);
            return;
        }else{
            printf("\n? %d %d\n", 1, 1+a);
            fflush(stdout);
            scanf("%d", &c);
            fflush(stdout);
            printf("\n! %d %d\n", 1+c, 1+a);
            fflush(stdout);
            return;
        }
    }else if(n-b==1+a){
        if(m-b==1+a){
            printf("\n! %d %d\n", 1+a, 1+a);
            fflush(stdout);
            return;
        }else{
            printf("\n? %d %d\n", 1+a, 1);
            fflush(stdout);
            scanf("%d", &c);
            fflush(stdout);
            printf("\n! %d %d\n", 1+a, 1+c);
            fflush(stdout);
            return;
        }
    }else{
        if((a+1)<=n && (m-b)>=1){
            printf("\n? %d %d\n", 1+a, m-b);
            fflush(stdout);
            scanf("%d", &c);
            fflush(stdout);
            if(c==0){
                printf("\n! %d %d\n", 1+a, m-b);
                fflush(stdout);
                return;
            }else{
                printf("\n! %d %d\n", n-b, a+1);
                fflush(stdout);
                return;
            }
        }else{
            printf("\n! %d %d\n", n-b, a+1);
            fflush(stdout);
            return;
        }
        
    }

}
int main(){
    int t; 
    scanf("%d", &t);
    fflush(stdout);
    while(t--) solve();
}