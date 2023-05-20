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
    ll tt=0,l=0;
    if(s[0]!='1')
    {
        no;
        return 0;
    }
    loop(i,0,s.size())
    {
        if(s[i]=='1' || s[i]=='4')
        {
            if(s[i]=='4')
            {
                tt++;
                if(tt>2)
                {
                    no;
                    l=1;
                    break;
                }
            }
            else tt=0;
        }
        else
        {
            no;
            l=1;
            break;
        }
        
    }
    if(l==0) yes;
    return 0;
}