#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
    
ll gcd(ll a,ll b){
 if(b==0)return a;
return gcd(b,a%b);}
    
void digits(int n){
 cout<<floor(log10(n)) + 1;}
    
 bool sortingdescending(pair<int,int> a,pair<int,int> b){
if( a.second<b.second) return false;
return true;
}
    
bool poweroftwo(ll x) {
return x && (!(x & (x-1)));
}
    
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//  #ifndef ONLINE_JUDGE
//         freopen("/home/tushir/coding/inputf.in", "r", stdin);
//         freopen("/home/tushir/coding/outputf.in", "w", stdout);
//     #endif
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
int one=0,zero=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if(a[i]==1) one++;
    else if(a[i]==0) zero++;
}
ll ans=pow(2,zero);
cout<<ans*one<<nl;
}
return 0;
}