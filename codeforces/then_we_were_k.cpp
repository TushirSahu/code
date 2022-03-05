#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    ll n;
    cin>>n;
    ll cnt=-1;
    while(n){
        cnt++;
        n/=2;
    }
    cout<<(1<<(cnt))-1<<nl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   solve();
}
return 0;
}