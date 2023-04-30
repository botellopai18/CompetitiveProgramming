#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    int k=0;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        if(n[i]==52 || n[i]==55){
            k++;
        }
    }
    if(k==4 || k==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}