#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n - 1];
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    long long s1 = n * n;
    s1 += n;
    s1 /= 2;
    cout << s1 - sum;
}