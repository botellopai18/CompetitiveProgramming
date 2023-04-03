#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,m; cin>>m>>n;
    int x1,y1,x2,y2; cin>>y1>>x1>>y2>>x2;
    string dir; cin>>dir;
    int down, right, bounces=0, difx,dify, dif;
    dir[0]=='D' ? down=1 : down=-1;
    dir[1]=='R' ? right=1 : right=-1;
    int lx=0, ly=0, changex=1, changey=1;
    while(2){
        if((abs(x2-x1)==abs(y2-y1)) && ((x2-x1)/abs(x2-x1)==right) && ((y2-y1)/abs(y2-y1)==down)){
            
            //cout<<bounces<<" "<<x1<<" "<<y1<<endl;
            cout<<bounces<<endl;
            return;   
            
        }else{
            if(right==1 && down==1){
                difx=n-x1; dify=m-y1;
            }else if(right==1 && down==-1){
                difx=n-x1; dify=y1-1;
            }else if(right==-1 && down==1){
                difx=x1-1; dify=m-y1;
            }else{
                difx=x1-1; dify=y1-1;
            }
            dif=min(difx,dify);
            //cout<<"dif:"<<dif<<" down:"<<down<<" right:"<<right<<" ";
            if(difx<dify){
                changex=-1; changey=1;
            }else if(difx==dify){
                changex=-1; changey=-1;
            }else{
                changex=1; changey=-1;
            }
        }
        //cout<<bounces<<" "<<x1<<" "<<y1<<endl;
        if(x1+right*dif==lx && y1+down*dif==ly){
            cout<<-1<<endl;
            return;
        }else{
            bounces++;
            lx=x1; ly=y1;
            x1+=right*dif; y1+=down*dif;
            right*=changex;
            down*=changey; 
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}