#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a);
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    ll a,tt=0;
    cin>>a;
    string s;
    loop(i,0,a)
    {
        cin>>s;
        if(s=="and" || s=="not" || s=="that" || s=="the" || s=="you") tt++;
    }
    (tt==0) ? no : yes;

    return 0;
}