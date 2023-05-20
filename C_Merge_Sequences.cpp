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
        ll a,b;
        cin>> a>>b;
        ll c[a],d[b],e[a+b];
        ll m[a],n[a];
        loop(i,0,a)
        {
            cin>>c[i];
            //e[i]=c[i];
        }
        loop(i,0,b)
        {
            cin>>d[i];
            //e[a+i]=d[i];
        }
        ull i=0,j=0,k=0;
        while (i < a && j < b) {
        if (c[i] <= d[j]) {
            c[i]=k+1;
            i++;
        } else {
            d[j]=k+1;
            j++;
        }
        k++;
    }
    while (i < a) {
        c[i]=k+1;
        i++;
        k++;
    }

    while (j < b) {
        d[j]=k+1;
        j++;
        k++;
    }
    loop(i,0,a-1)
        {
            cout<<c[i]<<" ";
        }
        cout<<c[a-1]<<v;
        loop(i,0,b-1)
        {
            cout<<d[i]<<" ";
            //e[a+i]=d[i];
        }
        cout<<d[b-1]<<v;
    return 0;
}