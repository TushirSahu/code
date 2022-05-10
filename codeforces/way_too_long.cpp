#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
void digits(ll n){ cout<<floor(log10(n)) + 1;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
if(s.length()<=10) cout<<s<<nl;
else{
    cout<<s[0]+to_string(s.length()-2)+s[s.length()-1]<<nl;
}

}
return 0;
}

