#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    int a[n];
    int ans;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll x=sqrt(a[i]);
        if(x*x==a[i]) continue;
        else{
            flag=true;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    
    
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