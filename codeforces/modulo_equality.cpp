#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<ll> S;
    ll temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= 2048)
        {
            S.push_back(temp);
        }
    }
    sort(S.begin(), S.end(), greater<int>());
    bool flag = false;
    ll res = 2048;
    for (int i = 0; i < S.size(); i++)
    {
        res = res - S[i];

        if (res == 0)
        {
            flag = true;
            break;
        }
        else if (res < 0)
        {
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}