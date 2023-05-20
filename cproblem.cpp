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
    int t;
    cin>>t;
    loop(k,0,t)
    {
        ll a,tt=0;
        cin>>a;
        char s[a];
        vector<char> m,n;
        loop(i,0,a)
        {
            cin>>s[i];
            if(i%2==0)
            {
                m.emplace_back(s[i]);
            }
            else n.emplace_back(s[i]);
        }
        loop(i,0,m.size())
        {
            loop(j,0,n.size())
            {
                if(m[i]==n[j])
                {
                    tt=1;
                    no;
                    break;
                }
            }
        }
        if(tt==0) yes;

    }

    return 0;
}
