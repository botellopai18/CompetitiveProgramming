#include <iostream>
using namespace std;

int main() {
	int prime[6] = {2,3,5,7,11,13};
	int t; cin>> t; while(t--){
	    int a, b; cin>>a>>b;
	    bool is_prime = 0;
	    for(int i=0; i<6; i++){
	        if( prime[i] == a+b){
	            is_prime = 1;
	        }
	    }
	    if(is_prime){
	        cout<<"Alice"<<endl;
	    }else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
