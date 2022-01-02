#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    ll cnt = 1, ma = 0;
    ll k = 0;
    if (a.length() == 1)
        cout << 1;
    else
    {

        for (ll j = 0; j < a.length() - 1; j++)
        {
            if (a[j] == a[j + 1])
                cnt++;
            else
            {
                ma = max(ma, cnt);
                cnt = 1;
            }
        }
        ma = max(ma, cnt);

        cout << ma;
    }
}