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
    int n,x;
    cin>>n>>x;
   int a[n];
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   int ans,y=0;
   for (int i = n-1; i >=0; i--)
   {
       if(a[i]<x){
           ans=i+1;
           y++;
           break;
       }
       
   }
   if(y==0) cout<<0<<nl;
   else cout<<ans<<nl;
}
   
return 0;
}