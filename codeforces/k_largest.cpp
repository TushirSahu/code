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
void solve(){
    ll n,q;
cin>>n>>q;
ll a[n];
ll cnt0=0,cnt1=0;
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
    if(a[i]==0) cnt0++;
    else cnt1++;
}
while(q--){
  ll t,y;
  cin>>t>>y;
  if(t==1){
      if(a[y-1]==1) {
          cnt1--;
          cnt0++;
      }
      else {
          cnt0--;
          cnt1++;
      }
      //else sum++;
      a[y-1]=1-a[y-1];
  }
  else{
   if(y<=cnt1) cout<<1<<nl;
   else cout<<0<<nl;
  }
  
}
} 
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
solve();
return 0;
}