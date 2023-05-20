#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    ll y;
    cin>>y;
    ll b[12];
    loop(i,0,12)
    {
        cin>>b[i];
    }
    sort(b,b+12,greater<ll>());
    ll tt=0,x=0;
   //cout<<tt<<" "<<y<<v;
    loop(i,0,12)
    {
        if(tt>=y) break;
        tt+=b[i];

        x++;
    }
    if(tt<y) cout<<"-1"<<v;
    else cout<<x<<v;
    return 0;
}