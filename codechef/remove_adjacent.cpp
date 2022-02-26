#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
 int n;
 cin>>n;
 ll a[n];
 ll op=0;
 ll res=INT_MIN;
 for ( int i=0;i<n;i++){
     cin>>a[i];
 }
 for (int i = 0; i < n; i++)
 {
     res=max(res,a[i]);
 }
 
 if(n==2){
     cout<<op+1<<"\n";
 }
 else{
  for (int i = 0; i < n-1; i++)
  {
      if(a[i]+a[i+1]==res){
          op++;
          i++;
      }
  }
  cout<<op<<"\n";
  
 }
 
}

#define mod 1000000007
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