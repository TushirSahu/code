#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   ll count=0,low=0,high=n-1;
   while(low<high){
     if(s[low]!=s[high]){
         count++;
     }
         low++;
         high--;
     
   }
   ll remainder=k-count;
   if( n%2==1) {
       if(count<=k){
       cout<<"YES\n";
       }
       else{
           cout<<"NO\n";
       }
      }
   else{
       if(remainder%2==0 && count<=k) {
       cout<<"YES\n";
       }
       else{
           cout<<"NO\n";
       }
   }
   
    
}
return 0;
}