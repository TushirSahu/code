#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
vector<char> v;
v.push_back(s[0]);
for (int i = 1; i < s.length()-2; i++)
{
   if(s[i]==s[i+1]){
       v.pb(s[i]);
       i++;
   }
}
v.pb(s[s.length()-1]);
for(auto i:v) cout<<i;
cout<<nl;
}
return 0;
}