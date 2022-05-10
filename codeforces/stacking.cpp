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
ll a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
bool flag=false;
ll sum=0,req=0;
for (ll i = 0; i < n; i++)
{
  sum+=a[i];
  req+=i;
  if(sum<req){
      flag=true;
      break;
  }
}
if(flag) cout<<"NO\n";
else cout<<"YES\n";


}
return 0;
}