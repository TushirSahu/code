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
    map<ll,ll> m;
    ll a[n];
      ll maxi=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]>maxi) maxi=m[a[i]];
    }
  
    ll mini=m.size();
    for (int i = 1; i <= n; i++)
    {
        if(i<=maxi) cout<<mini<<" ";
        else{ 
            mini++;
        cout<<mini<<" ";
        }
    }
    cout<<nl;
    
}
return 0;
}