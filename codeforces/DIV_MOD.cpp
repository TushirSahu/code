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
    int l,r,a;
    cin>>l>>r>>a;
  if(l/a==r/a) cout<<r/a+r%a<<nl;
  else{
      cout<<max(r%a+r/a,r/a-1+a-1)<<nl;
  }
}
return 0;
}