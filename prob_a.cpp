#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cout << '\n';
        int a,b,c,d,e,f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        if(a==c || a==e || c==e)
        {
            if(b==d || b==f || d==f) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
        else cout << "YES" << '\n';
    }
}