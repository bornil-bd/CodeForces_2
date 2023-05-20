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
    ll a,b,tt=0;
    cin>>a>>b;
    ll c=sqrt(a);
    ll d=sqrt(b);
    loop(i,0,c+1)
    {
        loop(j,0,d+1)
        {
            if(((i*i)+j)==a && (i+(j*j))==b) tt++;
        }
    }
    cout<<tt<<v;
    return 0;
}