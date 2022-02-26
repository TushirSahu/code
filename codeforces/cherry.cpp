#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<int> v(n);
    for (ll &i:v){
        cin>>i;
    }
   ll ans=0;
   for (ll i = 1; i < n; i++)
   {
       
       ans=max(ans,1LL*v[i]*v[i-1]);
   }
   cout<<ans<<nl;
   
}
return 0;
}