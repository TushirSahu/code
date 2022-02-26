#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    ll n;
cin>>n;
if(n%2050!=0) cout<<"-1\n";
else{
    ll s=n/2050;
    ll sum=0;
    while(s>0){
      sum=sum+s%10;
     s=s/10;
    }
    cout<<sum<<nl;
  }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}