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
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  int count1=0,count0=0;
  for (int i = 0; i < n; i++)
  {
      if(a[i]==1) count1++;
      else count0++;
  }
  if(count0==0) cout<<0<<nl;
  else{
      int c=0,b=0;
      for (int i = 0; i < n-1; i++)
      {
          if(a[i]==1 && a[i+1]==0) {
              c=i;
              break;
          }

      }
      for (int i = 0; i < n-1; i++)
      {
          if(a[i]==0 && a[i+1]==1){
              b=i;
          }
      }
      cout<<b-c+1<<nl;
      
  }
  
}
return 0;
}