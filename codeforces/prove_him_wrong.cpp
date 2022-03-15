#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
#define mod1 1000000000
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
    vector<int> v;
    if(n>19) cout<<"NO\n";
    else{
        cout<<"YES\n";
        ll a[n];
        a[0]=1;
        for (ll i = 1; i < n; i++)
        {
            a[i]=a[i-1]*3;
        }
        // for(auto i:v) cout<<i<<" ";
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
 
        }
        cout<<nl;
        
     
    }
}
return 0;
}