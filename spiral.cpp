#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getNum(ll x, ll y, ll ma)
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;
        ll ma = max(x, y);
        ll res = getNum(x - 1, y - 1, ma);
        cout << res << endl;
    }
}