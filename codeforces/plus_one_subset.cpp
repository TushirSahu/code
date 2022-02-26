#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(all(v));    
    ll maxi= *max_element(all(v));
    ll mini=*min_element(all(v));
    cout<<maxi-mini<<nl;
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