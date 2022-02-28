#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
        int n,a,b;
    cin>>n>>a>>b;
    int x=n;
  vector<int> v(n);
  v[0]=a;
  v[n-1]=b;
  int maxi=n;
  for (int i = 1; i < n/2; i++)
  {
    if(maxi==b) maxi--;
    v[i]=maxi;
    maxi--;
  }
  int mini=1;
  for (int i = n-2; i >= n/2; i--)
  {
      if(mini==a) mini++;
      v[i]=mini;
      mini++;
  }
  vector<int> ans(n);
  for (int i = 0; i < n; i++)
  {
      ans[i]=v[i];
  }
  sort(ans.begin(),ans.end());
  for (int i = 1; i < n; i++)
  {
      if(ans[i]==ans[i-1]) {
          cout<<-1<<nl;
          return;
      }
  }
  for(auto i:v) cout<<i<<" ";
  cout<<nl;
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