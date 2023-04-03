#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n>=4){
            cout << 1 << " " << 1;
        }else{
            switch(n){
            case 3:
                if(m==1){
                    cout << 2 << " " << 1;
                    break;
                }else {
                    cout << 2<< " "  << m-1;
                    break;
                }
            case 2:
                if(m==1){
                    cout << 1 << " " << 1;
                    break;
                }else{
                    cout << 1 << " " << m-1;
                    break;
                }
            case 1:
                cout << 1 << " " <<1;
                break;
            }
        }
        cout << endl;
    }
}