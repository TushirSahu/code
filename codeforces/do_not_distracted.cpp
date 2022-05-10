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
int n;
cin>>n;
string s;
cin>>s;
map<char,ll> m;
bool flag=true;
m[s[0]]=1;
for (int i = 1; i < n; i++)
{
   m[s[i]]++;
   if(m[s[i]]>1 && s[i-1]!=s[i])   {flag=false;break;}
}
if(flag) cout<<"YES\n";
else cout<<"NO\n";


}
return 0;
}