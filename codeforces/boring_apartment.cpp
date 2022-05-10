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
    
int digits(int n){
 int r=floor(log10(n)) + 1;
 return r;}
    
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
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
int x;
cin>>x;
int rem=x%10;
int dig=digits(x);
if(dig==4) cout<<10*rem<<nl;
else{
    // cout<<dig<<nl;
   int ans=10*(rem-1);
   for (int i = 1; i <= dig; i++)
   {
       ans+=i;
   }
   cout<<ans<<nl;
   
}
}
return 0;
}