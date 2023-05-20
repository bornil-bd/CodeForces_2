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
    ll a,pos=0;
    cin>>a;
    if(a==0) cout<<"0 0 0"<<v;
    else if(a==1) cout<<"0 0 1"<<v;
    else if(a==2) cout<<"0 1 1"<<v;
    else{
    ll b[46];
    b[0]=0;
    b[1]=1;
    loop(i,2,46)
    {
        b[i]=b[i-1]+b[i-2];
        //cout<<b[i]<<v;
        pos=i;
        if(b[i]>=a) break;
    }
    //cout<<pos<<v;
    
        cout<<"0"<<" "<<a-b[pos-1]<<" "<<b[pos-1]<<v;
    }
    return 0;
}