#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a);
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    vector<ll>vc;
    ll a;
    cin >>a;
    ll b[a];
    loop(i,0,a)
    {
        cin>>b[i];
        if(b[i]%2==0) vc.pb(b[i]);
    }
    loop(i,0,vc.size()-1)
    {
        cout<<vc[i]<< " ";
    }
    cout<<vc[vc.size()-1]<<v;

    return 0;
}