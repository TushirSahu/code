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
    vector<ll> ve;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]%2==1) ve.push_back(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
       if(v[i]%2==0) ve.push_back(v[i]);
    }
    for(auto i:ve) cout<<i<<" ";
    cout<<nl;
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