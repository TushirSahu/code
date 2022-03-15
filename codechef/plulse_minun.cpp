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
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<ll> even,odd;
    for (int i = 0; i < n; i++)
    {
        if(i % 2==1) even.push_back(abs(a[i]));
        else odd.push_back(abs(a[i]));
    }
    sort(all(even));
    sort(all(odd));
    int y=even.size();
    if(even[y-1]>odd[0]) swap(even[y-1],odd[0]);
    for (auto i:even)
    {
        ans-=i;
    }
    for (auto i:odd)
    {
        ans+=i;
    }
    cout<<ans<<nl;
    
    
    
    
    
}
return 0;
}