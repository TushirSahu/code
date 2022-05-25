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
// ll n;
string s;
cin>>s;
ll n=stoi(s);
ve v;
ll sum1=0,sum2=0;
for (int i = 0; i < s.length()-3; i++)
{
    sum1+=s[i]+'0';
}for (int i = 3; i < s.length(); i++)
{
    sum2+=s[i]+'0';
}

if(sum1==sum2) cout<<"YES\n";
else cout<<"NO\n";
// for(auto i: v){
//     cout<<i<<" ";
// }


}

return 0;
}