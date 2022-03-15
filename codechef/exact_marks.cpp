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
    ll n,x;
    cin>>n>>x;
  //  if(x/3< n && x!=0) cout<<"NO\n";
     if(x%3==0){
        cout<<"YES\n"; 
        cout<<x/3<<" "<<0<<" "<<n-x/3<<nl;
    }
    else{
         if(x%3==1){
             if(x/3+1+2<=n){
             cout<<"YES\n";
              cout<<x/3+1<<" "<<2<<" "<<n-x/3-1-2<<nl;
             }
             else cout<<"NO\n";
         }
         if(x%3==2){
             if(x/3+1+1<=n){
             cout<<"YES\n";
              cout<<x/3+1<<" "<<1<<" "<<n-x/3-1-1<<nl;
             }
             else cout<<"NO\n";
         }

    }
}
return 0;
}