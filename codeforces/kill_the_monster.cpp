#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

void ans()
{
 ll hc,dc,hm,dm;
 cin>>hc>>dc>>hm>>dm;
 ll k,w,a;
 cin>>k>>a>>w;
 bool flag=false;
 for(ll i=0;i<=k;i++){
 ll life = hc+i*w;
 ll attack = dc+(k-i)*a;
 ll timeC=(life)/dm;
 ll timeM=(hm)/attack;
 if(life%dm) {
     timeC++;
   }  
 if(hm%attack) {
     timeM++;
   }
 if(timeC>=timeM){
    flag=true;
    break;
   }
 }
  if(flag){
    cout<<"YES\n";
 }
 else{
    cout<<"NO\n";
 } 
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
ans();

}
return 0;
}
