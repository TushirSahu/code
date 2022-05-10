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
ve v(n);
int odd=0,even=0,rem=0;;
for (int i = 0; i < n; i++)
{
cin>>v[i];
if(v[i]%2!=i%2){
    if(i%2==0) even++;
    else odd++;
}
}
if(odd!=even  ) cout<<-1<<nl;
else{
    cout<<odd<<nl;
}

}
return 0;
}