#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back

    
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
ve v(n);
map<ll,ll> m;
int cnt0=0;
bool flag=false;
for (int i = 0; i < n; i++)
{
   cin>>v[i];
   if(v[i]==0) cnt0++;
   m[v[i]]++;
   if(m[v[i]]>1) flag=true;
    

}
// for(auto i:m){
//     cout<<i.second<<" ";
// }
// cout<<nl;
// sort(all(v));
if(m[0]>0) cout<<n-m[0]<<nl;
// if(cnt0=0)
   else if(flag){
       cout<<n<<nl;
   }
       else cout<<n+1<<nl;

// else {
//     cout<<n-cnt0<<nl;
// }



}
return 0;
}