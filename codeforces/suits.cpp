#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int ans;
   for (int  i = 0; i <= min(a,d); i++)
   {
       ans=max(ans,e*i+min((d-i),min(b,c))*f);
   }
   cout<<ans<<nl;
   
    
return 0;
}