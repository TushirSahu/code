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
    ll l,r,k;
    cin>>l>>r>>k;
    if(l==r && l!=1 && r!=1) cout<<"YES\n";
    else if(l==1 && r==1) cout<<"NO\n";
    else{
    int odd=(r-l)/2;
    if(r%2!=0 ||l%2!=0) odd++;
    int even=(r-l+1)-odd;
//cout<<odd<<nl;
    if(odd<=k) cout<<"YES\n";
    else cout<<"NO\n";
    }
}
 
return 0;
}