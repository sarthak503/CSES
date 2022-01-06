#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll b[n];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n), sort(b, b + m);
    ll p1 = 0, p2 = 0, c = 0;
    while (p1 < n && p2 < m)
    {
        if (abs(a[p1] - b[p2]) <= k)
        {
            c++;

            p1++, p2++;
        }
        else
        {
            if (a[p1] > b[p2])
                p2++;
            else
                p1++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (abs(a[i] - b[j]) <= k)
    //         {
    //             c++;
    //             j++;
    //             i++;
    //             continue;
    //         }
    //         else
    //         {
    //             j++;
    //         }
    //     }
    // }
    cout << c;
}