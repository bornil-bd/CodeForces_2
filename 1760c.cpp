#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
#define FOR4(a,b,c) for(int(a)=(b); (a)>=(c); (a)--)
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,x=0,d;
        cin >> n;
        int a[n];
        FOR(i,0,n)
        {
            cin >> a[i];
            if(a[i]>x)
            {
                x=a[i];
            }
        }
        m=x-a[0];
        FOR(i,0,n)
        {
            d=x-a[i];
            if(a[i]==x) continue;
            else
            {
            if(d<m)
            {
                m=d;
            }
            }
            
        }
        //cout << m << v;
        //cout << x << v;
        FOR(i,0,n)
        {
            if(a[i]==x) cout << m << " ";
            else cout << a[i]-x << " ";
        }
        cout << v;
    }
    return 0;
}