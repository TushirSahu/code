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
    string s;
   cin>>s;
   ll ans=0;
   ll one=0,zero=0;
   ll n =s.length();
   for (int i = 0; i < n; i++)
   {
       if(s[i]=='0'){
           zero++;
       }
       else{
           one++;
       }
       if(one!=zero){
           ans=min(zero,one);
       }
   }
   cout<<ans<<endl;
}
return 0;
}