#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 998244353
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
 ll Fact(ll n)
{  ll ans=1;
     if(n<INT_MAX){
     
        for(int i=2;i<=n;i++)
         {
             ans=(ans*i)%mod;
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
ll n;
cin>>n;
if(n%2==1) cout<<0<<nl;
else{
   ll ans= (Fact(n/2)*Fact(n/2));
   //ans=ans%mod;
  cout<<ans%mod<<nl;
}
}
return 0;
}