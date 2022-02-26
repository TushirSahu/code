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
    int ans=-1;
 for (int i = 0; i < n-1; i++)
 {
     if(a[i]!=a[i+1] && a[i]==a[i+2]) {
         ans=i+2;
         break;
     }
     else if(a[i]!=a[i+1] && a[i+1]==a[i+2]){
         ans=i+1;
         break;
     }
     else ans=n;
 }
 cout<<ans<<nl;
  
    
}
return 0;
}