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
   int n;
   cin>>n;
   int  a[n];
   multiset <int> st;
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
       st.insert(a[i]);
   }
   int ans=0;
   for (int i = 0; i < n; i++)
   {
       ans=max(ans,(int)st.count(a[i]));
   }
   cout<<ans<<"\n";
}
return 0;
}