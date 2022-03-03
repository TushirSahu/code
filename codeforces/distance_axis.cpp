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
    ll n,k;
    cin>>n>>k;
    if(n>=k && n%2==k%2) cout<<0<<nl;
    else if(n<k) cout<<k-n<<nl;
    else cout<<1<<nl;
    
}
return 0;
}