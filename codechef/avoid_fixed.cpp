#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
  ll n;
  cin>>n;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  int ans=0;
  for (int i = 0; i < n; i++)
  {
      int y=i+ans+1;
      if(y==a[i]){
          ans++;
      }
  }
  cout<<ans<<"\n";
  
  

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