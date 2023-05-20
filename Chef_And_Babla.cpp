#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define eb(a) emplace_back(a)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() int t;cin>>t;while(t--)
int main()
{
    fastio();
    test()
    {
        ll a;
        cin>>a;
        vector<ll>v1,v2;
        ll b[a];
        loop(i,0,a)
        {
            cin>>b[i];
            if(b[i]>0) v1.eb(b[i]);
            else v2.eb(-b[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1.size()==0) cout<<v2[0]-1<<v;
        else if(v2.size()==0) cout<<v1[0]-1<<v;
        else 
        {
            (v1[0]>=v2[0]) ? cout<<v2[0]-1<<v : cout<<v1[0]-1<<v;
        }
    }
    return 0;
}