// https://open.kattis.com/problems/nodup
// NOT DONE :C | 5nov22
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string s; getline(cin,s); int k=s.size();
    int w=0;
    for(int i=0; i<k; i++){
        if(s[i]==' '){
            w++;
        }
    }
    w++;
    string word[w+1]; word[w]="00000";
    for(int i=0; i<w; i++){
        cin>>word[i];
    }
    int cnt=0;
    while(cnt<w){
        for(int i=cnt+1; i<=w; i++){
            if(word[cnt]==word[i]){
                cnt=w+10;
            }
        }
        cnt++;
    }
    if(cnt>w+3){
        cout<<"yes";
    }else{
        cout<<"no";
    }

}