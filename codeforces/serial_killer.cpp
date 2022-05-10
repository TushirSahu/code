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
string s1,s2;
map<string,int> m;
cin>>s1>>s2;
m[s1]++;
m[s2]++;

int n;
cin>>n;
cout<<s1<<" "<<s2<<nl;
while(n--){
  string p1,p2;
  cin>>p1>>p2;
  m[p1]--;m[p2]++;
  for(auto i:m){
    if(i.second>0) cout<<i.first<<" ";
}
cout<<nl;
}

return 0;
}