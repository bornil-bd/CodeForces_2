#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    
    ll a ,b;
    cin>>a>>b;
    ll tt=0;
    ll x=1,z;
    loop(i,0,b)
    {
        ll c;
        cin>>c;
        //cout<<x<<v;
        if(c>=x)
        {
            z=c-x;
        }
        else
        {
            z=(a-x)+c;
        }
        tt+=z;
        //cout<<z<<v;
        x=c;
    }
    cout<<tt<<v;
    return 0;
}