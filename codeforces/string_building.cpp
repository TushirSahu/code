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
    
void solve(){
    string s;
cin>>s;
if(s.length()==1) {
    cout<<"NO\n";
    return;
}
for (int i = 0; i < s.length()-2; i++)
{
  if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='a'){
      cout<<"NO\n";
      return;
  }
  else if(s[i]=='b' && s[i+1]=='a' && s[i+2]=='b'){
      cout<<"NO\n";
      return;
  }
}

if(s[0]!=s[1] || s[s.length()-1]!=s[s.length()-2]){
    cout<<"NO\n";
    return;
}

    cout<<"YES\n";


   
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
 solve();
}
return 0;
}