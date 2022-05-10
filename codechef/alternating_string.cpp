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
vector<int> t;
cin>>s;
int cnt1=0,cnt0=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='1') cnt1++;
    else cnt0++;
}
int maxi=max(cnt0,cnt1);
int mini=min(cnt0,cnt1);
if(mini==maxi) cout<<2*mini<<nl;
else cout<<2*mini+1<<nl;
}
return 0;
}