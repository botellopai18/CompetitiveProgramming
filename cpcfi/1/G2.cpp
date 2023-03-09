
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
        ll n, c, save, x, y, ans, it[3], f; 
        cin>>n>>c;
        multimap<ll, ll> cost;
        ll lowest[3]={1000000000, 1000000000, 1000000000};
        for(ll i=0; i<(n+1)/2; i++)
        {
            cin>>save;
            save+=i+1;
            cost.insert(pair<ll,ll>(save, i));
            if(save<lowest[0])
            {
                lowest[0]=save;
                it[0]=i;
            }
        }
        lowest[2]=lowest[0];
        it[2]=it[0];
        for(ll j=(n+1)/2; j<n; j++)
        {
            cin>>save;
            cost.insert(pair<ll,ll>(save+n-j, j));
            if(save+n-j<lowest[2])
            {
                lowest[2]=save+n-j;
                it[2]=j;
            }
            if(save+j+1<lowest[1])
            {
                lowest[1]=save+j+1;
                it[1]=j;
            }
        }
        if(it[2]>=(int)((n+1)/2))
        {
            if(lowest[1]<lowest[0])
            {
                //cout<<"->";
                if(lowest[1]>c)
                {
                    ans=0;
                }else
                {
                    ans=1;
                    save=lowest[1];
                    for(auto i=cost.begin(); i!=cost.end(); i++)
                    {
                        x = i->first;
                        y = i->second;
                        if(y==it[1])
                        {
                            continue;
                        }
                        if(y==it[0])
                        {
                            save-=2*it[1]+1-n;
                        }
                        //cout<<y<<" "<<x<<" previusSum: "<<save<< endl;               
                        if(save+x>c){
                            break;
                        }else{
                            save+=x;
                            ans++;
                        }
                    }
                }   
            }else
            {
                //cout<<"->";
                if(lowest[0]>c)
                {
                    ans=0;
                }else
                {
                    ans=1;
                    save=lowest[0];
                    for(auto i=cost.begin(); i!=cost.end(); i++)
                    {
                        x = i->first;
                        y = i->second;
                        if(y==it[0])
                        {
                            continue;
                        }
                        //cout<<y<<" "<<x<<" previusSum: "<<save<< endl;               
                        if(save+x>c){
                            break;
                        }else{
                            save+=x;
                            ans++;
                        }
                    }      
                }
            }
        }
        else
        {
            //cout<<"<-";
            ans=0;
            save=0;
            for(auto i=cost.begin(); i!=cost.end(); i++)
            {
                x = i->first;
                y = i->second;
                //cout<<y<<" "<<x<<" previusSum: "<<save<< endl;               
                if(save+x>c){
                    break;
                }else{
                    save+=x;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}