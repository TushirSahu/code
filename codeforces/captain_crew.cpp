#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
 int n;
 cin>>n;
 if(n<=30) cout<<"NO\n";
 else{
     cout<<"YES\n";
     if(n==36||n==40||n==44) cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<nl;
     else cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<nl;
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