#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
   ll x1,x2;
    ll p1,p2;
    cin>>x1>>p1>>x2>>p2;
    
    if(p1==p2) {
        if(x1==x2) cout<<"="<<nl;
        else if(x1>x2) cout<<">"<<nl;
        else cout<<"<"<<nl;
    }
    else{
     while(x1<=1000000){
       if (p1==0) break;
      x1*=10;
      p1--;
     } 
      while(x2<=1000000){
      if (p2==0) break;
      x2*=10;
      p2--;
      }
      if(p1>p2) cout<<">"<<nl;
      else if(p1<p2) cout<<"<"<<nl;
      else {
          if(x1>x2) cout<<">"<<nl;
          else if(x1<x2)cout<<"<"<<nl;
          else cout<<"="<<nl;
      }
    

    }
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    solve();
}
   
return 0;
}