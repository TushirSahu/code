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
ll x,y;
cin>>x>>y;
ll m=min(x,y);
ll d=abs(x-y);
if(x==y) cout<<0<<" "<<0<<nl;
else{
    
    ll ans=min(x%d,d-x%d);//agr pehle is divisible hai d is isliye min liya
    cout<<d<<" "<<ans<<nl;
    }
    // else{
    //     ll ans=min(d%y,d-d%y);
    //     cout<<d<<" "<<ans<<nl;
    // }

}
return 0;
}