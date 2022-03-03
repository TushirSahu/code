#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0;
    vector<ll> p(n);
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        p[i]=sum;
    }
   
    //int ans=sum;
    
    ll x=sum;
    for (int i = 0; i < n; i++)
    {
        x=min(x,max(p[i],sum-p[i]));
    }
    cout<<x<<nl;
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