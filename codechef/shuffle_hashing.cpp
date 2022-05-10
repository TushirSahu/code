#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(), v.end()
#define pb push_back
#define eb emplace_back

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void digits(int n)
{
    cout << floor(log10(n)) + 1;
}

bool sortingdescending(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return false;
    return true;
}

bool poweroftwo(ll x)
{
    return x && (!(x & (x - 1)));
}
void solve()
{
    string h, p;
    cin >> p >> h;
    map<char, int> m;
     if (p.size() > h.size())
    {
        cout << "NO\n";
        return;
    }
    // int ans = abs(tt - n);
    for (int i = 0; i < p.size(); i++)
    {
        m[p[i]]++;
    }
   
   
    // for(auto i:m1) cout<<i.first<<" "<<i.second<<nl;
    // cout<<nl;
    // for(auto i:m2) cout<<i.first<<" "<<i.second<<nl;
    for (int i = 0; i < h.size()-p.size() + 1; i++)
    {   map<char, int> m1;
 string temp = "";
        for (int j = i; j < p.size()+ i; j++)
        {
            // m2[h[j]]++;
            temp.push_back(h[j]);
        }
        // cout<<temp<<nl;
        for (int k = 0; k < temp.size(); k++)
        {
            m1[temp[k]]++;
        }
        int res = 0;
        // cout<<temp<<nl;
        for (int h = 0; h < temp.size(); h++)
        {
            if (m1[temp[h]] == m[temp[h]])
            {
                res++;
            }
        }
        if (res == temp.size())
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("/home/tushir/coding/inputf.in", "r", stdin);
    freopen("/home/tushir/coding/outputf.in", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {

        solve();

        // if(flag) cout<<"YES\n";
        // else cout<<"NO\n";
    }
    return 0;
}