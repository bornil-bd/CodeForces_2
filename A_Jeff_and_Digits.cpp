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
    ll a,f=0,z=0;
    cin>> a;
    ll b;
    loop(i,0,a)
    {
        cin>>b;
        if(b==0) z++;
        else f++;
    }
    if(z==0) cout<<"-1"<<v;
    else if(f<9) cout<<"0"<<v;
    else
    {
        f=f-(f%9);
        loop(i,0,f)
        {
            cout<<"5";
        }
        loop(i,0,z)
        {
            cout<<"0";
        }
        cout<<v;
    }
    return 0;
}