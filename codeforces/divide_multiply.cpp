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
    ll cnt=0,res=1;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        while(a[i]%2==0){
          //  cnt++;
            a[i]=a[i]/2;
            res*=2;
        }
        
    }
    //cout<<res<<nl;
    sort(a,a+n);
    a[n-1]*=res;
    //cout<<a[n-1]<<nl;
    ll sum=0;
    //cout<<a[n-1]+a[0]<<nl;
    for (int i = 0; i < n; i++)
    {
     sum+=a[i];
    }
    cout<<sum<<nl;
}
return 0;
}