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
ll n;
cin>>n;
ve v(n);
for (int i = 0; i < n; i++)
{
cin>>v[i];
}

sort(all(v));
cout<<v[n-1]+v[n-2]<<nl;
}
return 0;
}