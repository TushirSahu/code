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
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
ll n,r;
cin>>n>>r;
ll a[n],b[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
vector<pair<int,int>> v;
for (int i = 0; i < n; i++)
{
   v.pb({a[i]-b[i],a[i]});
}
ll moves=0;
sort(all(v));
ll j=0;
while(r>0 && j<n){
    if(r>=v[j].second){
    ll initial=(r-v[j].first)/v[j].second;
    r-=(initial)*v[j].first;
    r-=v[j].first;
    moves=initial+1;
    }
    j++;
}
cout<<moves<<nl;
}

return 0;
}