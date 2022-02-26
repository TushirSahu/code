#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
ll Gcdsum(ll n){
    ll temp=n,digitsum=0;
    while(temp>0){
        digitsum+=temp%10;
        temp/=10;
    }
    ll final_gcd=__gcd(n,digitsum);
    
return final_gcd;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
//cout<<Gcdsum(n);
if(Gcdsum(n)!=1) cout<<n<<nl;
else if(Gcdsum(n+1)!=1) cout<<n+1<<nl;
else  cout<<n+2<<nl;
}
return 0;
}