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
    string ss="";
    ll c;
    loop(i,0,s.size())
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
        }
        else{
            ss+=s[i];
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B' && i+3!=s.size())
        {
            ss+=" ";
        }
        }
    }
    cout<<ss<<v;
    return 0;
}