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
    ll a,b;
    cin>> a>>b;
    ll c[b];
    ll d=a-1,dif;
    loop(i,0,b)
    {
        cin>>c[i];
    }
    sort(c,c+b);
    ll m=c[d]-c[0];
    loop(i,d,b)
    {
        dif=c[i]-c[i-d];
        if(dif<m) m=dif;
    }
    cout<<m<<v;
    return 0;
}