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
    string s;
    cin>>s;
    ll tt=0;
    loop(i,0,s.size())
    {
        if(s[i]=='h' && tt==0)
        {
            tt=1;
        }
        if(s[i]=='e' && tt==1)
        {
            tt=2;
        }
        if(s[i]=='l' && (tt==2 || tt==3))
        {
            tt++;
        }
        if(s[i]=='o' && tt==4)
        {
            tt=5;
        }
        //cout<<tt<<v;
    }
    (tt==5) ? yes : no;

    return 0;
}