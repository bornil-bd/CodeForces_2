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
    ll a,b,odd,even;
    cin>>a>>b;
    if(a%2==0) odd=a/2;
    else odd=(a/2)+1;
    //even=a-odd;
    if(b<=odd)
    {
        cout<<((b-1)*2)+1<<v;
    }
    else cout<<(b-odd)*2<<v;
    return 0;
}