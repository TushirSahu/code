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
int n,m;
cin>>n>>m;
int res=n/m;
if(res/2>0) cout<<res/2<<nl;
else cout<<0<<nl;
}
return 0;
}