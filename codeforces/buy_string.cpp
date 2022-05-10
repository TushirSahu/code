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
int n,c0,c1,h;
cin>>n>>c0>>c1>>h;
string s;
cin>>s;
int cnt=0,ans=0;


    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1') {
            cnt++;
            ans+=min(c1,c0+h);
        }
        else ans+=min(c0,c1+h);
    }
   
    cout<<ans<<nl;

}
return 0;
}