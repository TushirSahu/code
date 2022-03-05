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
    int even=0,odd=0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(even<n/2 || odd<n/2) cout<<-1<<nl;
    else if(n==1) cout<<0<<nl;
    else{
        int ans=0;
        for (int i = 0; i < n-1; i++)
        {
            if((a[i]%2==0 && a[i+1]%2==0 )|| (a[i]%2!=0 && a[i+1]%2!=0)) ans++;
        }
        cout<<ans<<nl;
    }
    

}
return 0;
}