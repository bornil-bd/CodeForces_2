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
    pair<ll,ll>p[1000];
    loop(i,0,b)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+b);
    loop(i,0,b)
    {
        if(a>p[i].first)
        {
            a+=p[i].second;
        }
        else
        {
            tt=1;
            no;
            break;
        }
    }
    if(tt==0) yes;

    return 0;
}