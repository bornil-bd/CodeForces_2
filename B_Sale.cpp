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
    ll a,b,sum=0;
    cin>> a >>b;
    ll c[a];
    loop(i,0,a)
    {
        cin>>c[i];
    }
    sort(c,c+a);
    loop(i,0,b)
    {
        if(c[i]<0)
        {
        sum+=(-c[i]);
        }
    }
    cout<<sum<<v;
    return 0;
}