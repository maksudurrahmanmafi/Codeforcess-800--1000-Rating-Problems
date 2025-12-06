#include <bits/stdc++.h>
#include<numeric>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
 
        int n;
        cin >> n;
 
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
 
        ll G = 0;
        for (int i = 0; i < n; i++)
        {
            G = __gcd(G, llabs(v[i]));
        }
        if (G == 1)
        {
            cout << 2 << "\n";
            continue;
        }
        const ll limit = 1000000LL;
        bool found = false;
        for (ll x = 2; x <= limit; x++)
        {
            if (__gcd(x, G) == 1)
            {
                cout << x << "\n";
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << '\n';
    }
 
    return 0;
}