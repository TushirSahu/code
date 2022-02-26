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
    ll b,c;
    cin>>b>>c;
    ll lcm=(b*c)/__gcd(b,c);
   ll a=lcm/b;
    cout<<a<<nl;
}
return 0;
}