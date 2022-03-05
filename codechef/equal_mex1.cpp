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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
  int cnt0=0;
  for (int i = 0; i < n; i++)
  {
      if(a[i]==0) cnt0++;
  }
  int ans=max(cnt0,n-cnt0);
  cout<<ans<<nl;
}
return 0;
}