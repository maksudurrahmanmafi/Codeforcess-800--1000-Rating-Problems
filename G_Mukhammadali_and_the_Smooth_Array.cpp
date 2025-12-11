
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e18;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
 
        int n;
        cin >> n;
        vector<ll> a(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
 
        vector<ll> v = a;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
 
        int m = v.size();
        vector<ll> dp(m, INF);
 
        for (int j = 0; j < m; j++)
        {
           
            if (a[0] == v[j])
                dp[j] = 0; 
            else
                dp[j] = c[0];
        }
 
        for (int i = 1; i < n; i++)
        {
            vector<ll> new_dp(m, INF);
            ll mn = INF;
         
            for (int j = 0; j < m; j++)
            {
          
                if (dp[j] < mn)
                    mn = dp[j];
 
            
                if (a[i] == v[j])
                    new_dp[j] = mn + 0;
                else
                    new_dp[j] = mn + c[i];
            }
 
            dp = new_dp;
        }
 
        ll ans = *min_element(dp.begin(), dp.end());
        cout << ans << "\n";
    }
 
    return 0;
}