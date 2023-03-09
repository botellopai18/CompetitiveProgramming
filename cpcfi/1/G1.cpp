// Accepted
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
typedef long long ll;

void solve(){
    
}   
int main(){
    int T; cin>>T;
    for(int t=0; t<T; t++)
    {
        ll n, c, save, x, y, ans=0; 
        cin>>n>>c;
        multimap<ll, ll> cost;
        for(int i=0; i<n; i++)
        {
            cin>>save;
            cost.insert(pair<ll,ll>(save+i+1, i));
        }
        save=0;
        for(auto i=cost.begin(); i!=cost.end(); i++)
        {
            x = i->first;
            y = i->second;
            //cout<< i->first <<" "<< i->second<< endl;
            if(save+x>c){
                break;
            }else{
                save+=x;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}