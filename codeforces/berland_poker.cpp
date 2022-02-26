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
   ll n,k,m;
    cin>>n>>m>>k;
    ll card=n/k;
    if(card>=m){
        cout<<m<<"\n";
        continue;
    }
    ll new_card=m-card;
   ll tmp=new_card/(k-1);
   if(new_card%(k-1)!=0){
       tmp++;
   }
   cout<<card-tmp<<"\n";
 
}

return 0;
}