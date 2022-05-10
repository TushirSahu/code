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
ll t[26];
for (int i = 0; i < s.size(); i++)
{
    t[s[i]-'a']=i;
}
string st;
cin>>st;
ll ans=0;
for (int i = 0; i < st.size()-1; i++)
{
    ans+=abs(t[st[i]-'a']-t[st[i+1]-'a']);
}
cout<<ans<<nl;
}
return 0;
}