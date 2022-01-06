#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
    }
    else if (n != 1 && n < 4)
    {
        cout << "NO SOLUTION";
    }
    else if (n == 4)
    {
        cout << "3 1 4 2";
    }
    else
    {
        vector<ll> odd;
        vector<ll> even;
        for (ll i = 1; i <= n; i++)
        {
            if ((i % 2) != 0)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        sort(odd.begin(), odd.end(), greater<ll>());
        sort(even.begin(), even.end(), greater<ll>());
        for (auto x : even)
            cout << x << " ";
        for (auto x : odd)
            cout << x << " ";
    }
}