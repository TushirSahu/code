#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ve v;
for (ll i = k+1; i <= n; i++)
{
    v.pb(i);
}
for (int i = (k+1)/2; i < k; i++)
{
    v.pb(i);
}

cout<<v.size()<<nl;
for(auto i:v) cout<<i<<" ";
cout<<nl;
}
return 0;
}