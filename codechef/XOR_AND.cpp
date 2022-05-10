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
int n;
cin>>n;
ll a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
ll total_bits[32]={ 0 } ;
map<ll,ll> m;
for (int i = 0; i < n; i++)
{
    ll power=log2(a[i]);
    total_bits[power]++;
}
ll total_pairs=0;
for (int i = 0; i < 32; i++)
{
    cout<<total_bits[i]<<" ";
}
cout<<nl;

for(int i = 0; i < 32; i++){
      total_pairs+=(total_bits[i]*(total_bits[i]-1))/2;
}
// cout<<total_pairs<<nl;


}
return 0;
}