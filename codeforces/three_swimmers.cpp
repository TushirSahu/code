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
 ll p,a,b,c;
 cin>>p>>a>>b>>c;
ll A=a-p%a;
ll B=b-p%b;
ll C=c-p%c;
if(A==a) A=0;
if(B==b) B=0;
if(C==c) C=0;
ll ans=min(A,min(B,C));
cout<<ans<<nl;

}
return 0;
}