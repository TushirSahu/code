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
 int ans=0;
 int equals=n/3;
 int a[n],c0=0,c1=0,c2=0;
 for (int i = 0; i < n; i++)
 {
     cin>>a[i];
     if(a[i]%3==0) c0++;
     else if(a[i]%3==1) c1++;
     else c2++;
 }
 while(1){
     if(c0==c1 && c1==c2) break;
   int  maxi=max(c0,max(c1,c2));
   if(c1==maxi){
       c1--;
       ans++;
       if(c2<equals){
           c2++;
       }
       else if(c0<equals){
           c0++;
           ans++;
       }
   }
    else if(c0==maxi){
       c0--;
       ans++;
       if(c1<equals){
           c1++;
       }
       else if(c2<equals){
           c2++;
           ans++;
       }
    }
    else if(c2==maxi){
       c2--;
       ans++;
       if(c0<equals){
           c0++;
       }
       else if(c1<equals){
           c1++;
           ans++;
       }
    

   }
 }
 cout<<ans<<nl;
    
}
return 0;
}