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
    ll o=0,z=0,x=0;
    string s;
    cin>>s;
    loop(i,0,s.size())
    {
        if(s[i]=='0')
        {
            z++;
            o=0;
        }
        else if(s[i]=='1')
        {
            o++;
            z=0;
        }
        //cout<<o<<" "<<z<<v;
        if(o==7 || z==7)
        {
            x=1;
            yes;
            break;
        }
    }
    if(x==0) no;
    return 0;
}