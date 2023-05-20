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
    double x,tt=0;
    vector<ll>st;
    ll a;
    cin>> a;
    ll b[a];
    loop(i,0,a)
    {
        cin>>b[i];
    }
    ll c;
    cin>>c;
    ll d[c];
    loop(i,0,c)
    {
        cin>>d[i];
    }
    loop(i,0,a)
    {
        loop(j,0,c)
        {
            x=(double)(d[j]*1.0)/(double)(b[i]*1.0);
            if((floor)(x)==(ceil)(x))
            {
                st.emplace_back((floor)(x));
            }
        }
    }
    sort(st.begin(),st.end(),greater<ll>());
    loop(i,0,st.size())
    {
        if(st[i]!=st[0])
        {
            break;
        }
        else tt++;
    }
    cout<<tt<<v;


    return 0;
}