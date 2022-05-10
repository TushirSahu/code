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
    int n,x,k;
    cin>>n>>x>>k;
    if(k/x<n) cout<<k/x<<nl;
    else cout<<n<<nl;
}
return 0;
}