#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define v '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define loop(a, b, c) for (ull(a) = (b); (a) < (c); (a)++)
#define test() \
    ull t;     \
    cin >> t;  \
    while (t--)
int main()
{
    fastio();
    ll count = 0;
    ll t;
    cin >> t;
    // ll n=t;
    ll a, b, l, r, u, d;
    ll x[t + 1], y[t + 1];
    loop(i, 0, t)
    {
        cin >> x[i] >> y[i];
    }
    loop(i, 0, t)
    {
        l = r = u = d = 0;
        a = x[i];
        b = y[i];
        loop(j, 0, t)
        {
            if (x[j] == a)
            {
                if (y[j] > b)
                    u++;
                if (y[j] < b)
                    d++;
            }
            if (y[j] == b)
            {
                if (x[j] > a)
                    r++;
                if (x[j] < a)
                    l++;
            }
        }
        //cout << a << " " << b << v;
        //cout << l << " " << r << " " << u << " " << d << v;
        if (l > 0 && r > 0 && u > 0 && d > 0)
            count++;
    }
    cout << count << v;
    return 0;
}