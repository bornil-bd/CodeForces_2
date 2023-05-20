#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define FOR2(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FOR3(a, b, c) for (int(a) = (b); (a) > (c); (a)--)
#define FOR4(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
int main()
{
    int t, flag;
    cin >> t;
    while (t--)
    {
        int a[9];
        cin >> a[0] >> a[1] >> a[3] >> a[2];
        a[4] = a[0];
        a[5] = a[1];
        a[6] = a[2];
        flag = 0;
        FOR(i, 0, 4)
        {
            if (a[i] < a[i + 1] && a[i] < a[i + 3] && a[i + 2] > a[i + 1] && a[i + 2] > a[i + 3])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << v;
        else
            cout << "NO" << v;
    }
    return 0;
}