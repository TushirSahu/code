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
map<char,ll> st;
for (int i = 0; i < s.length(); i++)
{
    st[s[i]]++;
}
int ans=-1;
for (int i = 0; i < s.length(); i++)
{
    if(st[s[i]]<=1) break;
    else {
        ans=i;
        st[s[i]]--;
    }
}

for (int i = ans+1; i < s.length(); i++)
{
    cout<<s[i];
}

cout<<nl;

}
return 0;
}