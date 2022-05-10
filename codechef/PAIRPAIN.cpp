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
ll n;
cin>>n;
ll a[n];
ll cnt1=0,cnt2=0;
// ll res=0;
for (int i = 0; i < n; i++)
{
   cin>>a[i];
   if(a[i]==1) cnt1++;
   if(a[i]==2)cnt2++;
}
ll res=cnt1*(n-cnt1);
if(cnt1>1) res+=((cnt1*(cnt1-1)/2));
if(cnt2>1) res+=((cnt2*(cnt2-1)/2));

cout<<res<<nl;


}
return 0;
}