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
    ll n,m;
    cin>>n>>m;
    vector<ll> a; 
    if(n==1) cout<<0<<nl;
    else if(n==2) cout<<m<<nl;
    else{
         ll sum=2*m;
       
        cout<<sum<<nl;
        
    }
}
return 0;
}