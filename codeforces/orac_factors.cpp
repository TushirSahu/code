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
    
ll leastfact(ll n){
    ll ans=0;
    for (ll i = 2; i <= n; i++)
    {
        if(n%i==0){
              ans= i;
              break;
        }
    }
    return ans;
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ll res=n;
ll x=leastfact(n);
if(res%2==0) cout<<res+2*k<<nl;
else{
     res+=x;
    if(k==1){ 
    cout<<res<<nl;
}
  else{
      k--;
      
    // cout<<res<<nl;
    cout<<res+2*k<<nl;
  }


}
}
return 0;
}