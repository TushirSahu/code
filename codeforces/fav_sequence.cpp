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
int a[n];
ve v;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int i=0,j=n-1;
while(i<j){
    v.pb(a[i]);
    v.pb(a[j]);
    i++;
    j--;

}
if(n%2==1) v.pb(a[n/2]);
for(auto &i:v) cout<<i<<" ";
cout<<nl;
}
return 0;
}