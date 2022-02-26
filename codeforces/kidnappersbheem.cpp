#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define maxn 1000000

int main()
{
  long long factorial[maxn + 1];
  factorial[1] = 1;
  for (long long int i = 2; i < maxn+1; i++)
  {
    factorial[i] = (i * factorial[i - 1]) % mod;
  }
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << factorial[n] << '\n';
  }
  return 0;
}