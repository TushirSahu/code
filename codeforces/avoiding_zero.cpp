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
int n;
cin>>n;
ve v(n);
ve vi;
int sum=0;
ve pos,neg;
for (int i = 0; i < n; i++)
{
    cin>>v[i];
    // if(v[i]<0) neg.eb(v[i]);
    // if(v[i]>=0) pos.eb(v[i]);
    sum+=v[i];
}
// sort(all(neg));
// sort(all(pos),greater<int>());
if(sum==0) cout<<"NO\n";
else{
    cout<<"YES\n";
    if(sum<0)
  {
      sort(all(v));
   for (auto i:v){
       cout<<i<<" ";
   }
  }
   else{
       sort(all(v),greater<int>());
       for(auto i:v) cout<<i<<" ";
       
   }

   
    cout<<nl;
}


}
return 0;
}