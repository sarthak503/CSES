#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            while ((a[i] > a[i + 1]))
            {
                a[i + 1]++;
                cnt++;
            }
        }
        cout << cnt;
    }
}