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
ve v(n);
for(auto &i:v) cin>>i;
sort(all(v));
int k=v[n-1];
int cnt=0;
int mini=*min_element(all(v));
for (int i = 0; i < n; i++)
{
    if(v[i]==mini) cnt++;
}
   
cout<<n-cnt<<nl;
}
return 0;
}