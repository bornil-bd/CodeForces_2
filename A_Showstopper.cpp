//b0rnil
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
    test()
    {
        ll a;
        cin>>a;
        ll b[a],c[a],ch;
        ll bh=ch=INT_MIN;
        loop(i,0,a)
        {
            cin>>b[i];
            if(b[i]>bh) bh=b[i];
        }
        loop(i,0,a)
        {
            cin>>c[i];
            if(c[i]>ch) ch=c[i];
        }
        cout<<bh<< " "<<ch<<v;
        if(bh==b[a-1] && ch==c[a-1]) 
        {
            yes;
            continue;
        }
        bh=ch=INT_MIN;
        ll temp=b[a-1];
        b[a-1]=c[a-1];
        c[a-1]=temp;
        loop(i,0,a)
        {
            if(b[i]>bh) bh=b[i];
        }
        loop(i,0,a)
        {
            if(c[i]>ch) ch=c[i];
        }
        cout<<bh<< " "<<ch<<v;

        if(bh==b[a-1] && ch==c[a-1]) yes;
        else no;

    }
    return 0;
}