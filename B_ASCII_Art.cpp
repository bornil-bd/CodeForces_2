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
    ll a,b;
    cin>>a>>b;
    ll c[a][b];
    char vc[a][b];
    loop(i,0,a)
    {
        loop(j,0,b)
        {
            cin>>c[i][j];
        }
    }
    loop(i,0,a)
    {
        loop(j,0,b)
        {
            if(c[i][j]==0) vc[i][j]='.';
            else{
                vc[i][j]=(char)(c[i][j]+64);
            }
        }
    }
    loop(i,0,a)
    {
        loop(j,0,b)
        {
            cout<<vc[i][j];
        }
        cout<<v;
    }   
    return 0;
}