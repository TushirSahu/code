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
ll n,m;
cin>>n>>m;
int a[n][m];
for (int i = 0; i < n; i++)
{
  for (int j = 0; j <m; j++)
  {
      cin>>a[i][j];
  }
}
ll maxi=INT_MIN;
ll sum=0;
map<ll,ll> m1,m2;
for (int i = 0; i < n; i++)
{
  for (int j = 0; j < m; j++)
  {
    m1[i+j]+=a[i][j];
    m2[i-j]+=a[i][j];
      //  maxi=max(maxi,m1[i+j]+m2[i-j]-a[i][j]);
  }
for (int i = 0; i < n; i++)
{
  for (int j = 0;j< m; j++)
  {
    maxi=max(maxi,m1[i+j]+m2[i-j]-a[i][j]);
  }
  
}


}
cout<<maxi<<nl;                                       


}
return 0;
}