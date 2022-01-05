#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    set<ll, greater<ll>> s1;
    for (ll i = 0; i < n; i++)
        s1.insert(ar[i]);
    cout << s1.size();
}