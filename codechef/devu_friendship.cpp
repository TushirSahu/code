#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
    
        int n;
        vector<int> vec;
        cin >> n;
        int f = n;
        for (int i = 0; i < n; i++)
        {
            int N;
            cin >> N;
            vec.push_back(N);
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n-1; i++)
        {
            // if (i == n - 1)
            // {
            //     continue;
            // }

            if (vec[i] == vec[i + 1])
            {
                f--;
            }
        }

        cout << f << endl;
    }
    return 0;
}