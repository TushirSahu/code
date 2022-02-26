#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for (int i = 0; i < k; i++)
    {
      ll x;
      cin>>x;
      v.push_back(x);
    }
    sort(all(v));
    ll t=0;
    for (int i = 0; i <v.size() ; i++)
    {
        int y=v.at(i);
        for (int j = y; j>t; j--)
        {
            cout<<j<<" ";
        }
        t=y;
        
    }
    cout<<nl;
    
}
return 0;
}