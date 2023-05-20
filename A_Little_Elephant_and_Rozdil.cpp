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
    ll t,b,tt=0,pos;
    cin>> t;
    ll a[t];
    loop(i,0,t)
    {
        cin>>a[i];
    }
    b=a[0];
    loop(i,0,t)
    {
        if(a[i]<b) b=a[i];
    }
    //cout<<b<<v;
    loop(i,0,t)
    {
        if(a[i]==b) 
        {
            pos=i+1;
            tt++;
        }
    }
    //cout<<tt<<v;
    if(tt==1) cout<<pos<<v;
    else cout<<"Still Rozdil"<<v;
    return 0;
}