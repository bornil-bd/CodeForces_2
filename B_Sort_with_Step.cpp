//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
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
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
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
    ll m=0,n=0;
    ll cnt=0;
    for(int i=0; i<a; i++)
    {
        int x;
        cin>>x;
        int yy=i+1;
        int sem=abs(x-yy);
        if(sem%b!=0) cnt++;

    }
    if(cnt==0) cout<<"0"<<v;
    else if(cnt==2 ) cout<<"1"<<v;
    else cout<<"-1"<<v;
}

int main()
{
    fastio();
    ii(t); ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
    }
    return 0;
}