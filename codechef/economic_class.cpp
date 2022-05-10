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
int s[n],d[n];
for (int i = 0; i < n; i++)
{
    cin>>s[i];

}
int cnt=0;
for (int i = 0; i < n; i++)
{
    cin>>d[i];
    if(s[i]==d[i]) cnt++;
    
}
cout<<cnt<<nl;
}
return 0;
}