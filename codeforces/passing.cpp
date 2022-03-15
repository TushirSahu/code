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
    ll n;
    cin>>n;
    ll a[n];
    ll count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==0)count++;
    }
    sort(a,a+n);
    ll sum=0;
    for (int i = 0; i < n-1; i++)
    {
        sum+=a[i];
    }
    //cout<<sum<<nl;
  //  cout<<a[n-1]<<nl;
    if(count==n) cout<<0<<nl;
    else if(a[n-1]>sum) cout<<a[n-1]-sum<<nl;
    else cout<<1<<nl;
    
}
return 0;
}