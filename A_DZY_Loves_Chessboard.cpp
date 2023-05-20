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
    cin>>a>>b;
    char c[a+1][b+1];
    char d[a+1][b+1];
    loop(i,0,a)
    {
        loop(j,0,b)
        {
            cin>>d[i][j];
            if((i+j)%2==0) c[i][j]='B';
            else c[i][j]='W';
            if(d[i][j]=='-') c[i][j]='-';
        }
    }
    loop(i,0,a)
    {
        loop(j,0,b)
        {
            cout<<c[i][j]; 
        }
        cout<<v;
    }
    return 0;
}