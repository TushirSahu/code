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
// sort(a,a+n);
ll sum=0;
for (int i = 0; i < n; i++)
{
    sum+=a[i];
}
ll rem=sum%n;
ll equal=sum/n;


 cout<<rem*(n-rem)<<nl;


}
return 0;
}