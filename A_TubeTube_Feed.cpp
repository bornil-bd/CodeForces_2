//  b0rnil
//  feel free to asi any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define ii(a) ll a; cin>>a;
#define string(a) string a; cin>>a;
#define pb(a) emplace_back(a)
#define vll  vector<ll>
#define pq priority_queue
#define mpp make_pair
#define ff first
#define ss second
#define checi(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) (ll)((x).size())
#define bb begin()
#define ee end()
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
//#define test() ull t;cin>>t;while(t--)

void solve(ll tc)
{
    ii(a) ii(b)
    ll pos=-1;
    ll high=INT_MIN;
    vll vc,vcc;
    loop(i,0,a)
    {
        ii(x);
        vc.pb(x);
    }
    loop(i,0,a)
    {
        ii(o);
        vcc.pb(o);
    }
    loop(i,0,a)
    {
        if((vc[i]+i)<=b)
        {
            //cout<<it.ff<<v;
            if(vcc[i]>high)
            {
                high=vcc[i];
                pos=i+1;
            }
        }
    }
    cout<<pos<<v;
}

int main()
{
    fastio();
    ii(t); ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
        cout<<flush;
    }
    return 0;
}