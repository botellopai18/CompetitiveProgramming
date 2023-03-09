// Kick Start Round G 2022 Walktober (4pts, 6pts)
// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb2e1/0000000000c174f2
// 15oct2022
// DONE C: +-30min
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int T; cin >> T; for(int t=1; t<=T; t++){
        int m,n,p; cin >> m >> n >> p;
        int pasos[m][n];
        for(int i=0; i<m; i++){ for(int j=0; j<n; j++){
           cin >> pasos[i][j];
        } }
        int dif,johni,lili=0;
        for(int i=0; i<n; i++){ 
            dif=0; johni=pasos[p-1][i];
            for(int j=0; j<m; j++){
                if(pasos[j][i]-johni>dif){
                    dif=pasos[j][i]-pasos[p-1][i];
                }
            } 
            lili+=dif;
        }
        cout << "Case #" << t << ": " << lili << endl;
    }
}