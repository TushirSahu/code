#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    ll n;
 cin>>n;
    int y=0;
   while(n){
   if(n%10==4 || n%10==7) y++;
   n= n/10;
   }
   if(y==4||y==74||y==44||y==47||y==7) cout<<"YES\n";
   else cout<<"NO\n";
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

solve();
return 0;
}