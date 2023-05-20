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
    ll a,m=1,n=1,dif,x;
    cin>> a;
    ll b[a];
    loop(i,0,a)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    dif=b[a-1]-b[0];
    loop(i,1,a)
    {
        if(b[i]!=b[0] || i==a-1) break;
        else m++;
    }
    for(ll i=a-2; i>=0; i--)
    {
        if(b[i]!=b[a-1] || i==0) break;
        else n++;
    }
    //cout<<m<<" "<<n<<v;
    if(b[0]==b[a-1]) x=(a*(a-1))/2;
    else x=m*n;
    cout<<dif<<" "<<x<<v;
    return 0;
}