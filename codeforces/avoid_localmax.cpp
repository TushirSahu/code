#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    int c=0;
   
    for(ll &i:v) cin>>i;
     //ll maxi=*max_element(all(v));
    for (int i = 1; i < n-1; i++){
      if(v[i]>v[i-1] && v[i+1]<v[i]){
          
          if(i+2<n){
              v[i+1]=max(v[i],v[i+2]);
              
          }
          else v[i+1]=v[i];
          c++;
      }
      
    
    }
    cout<<c<<nl;
   for (int i = 0; i < n; i++)
   {
       cout<<v[i]<<" ";
   }
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