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
    
int fact(ll n){
    if(n==1) return 1;
    return n*fact(n-1);
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
string s;
cin>>s;
int ans=0;
for (int i = 0; i < 1; i++)
{
    if(s[i]<s[i+1]){
         ans=(s[i]-'a')*25+(s[i+1]-'a');
        // cout<<ans<<nl;
        break;;
    }
    else {
      ans=(s[i]-'a')*25+(s[i+1]-'a'+1);
    }
}
cout<<ans<<nl;
}
return 0;
}