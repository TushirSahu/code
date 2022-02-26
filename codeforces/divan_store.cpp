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
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>=l && a[i]<=r) v.push_back(a[i]);
    }
    int sum=0,ans=0;
    sort(all(v));
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
        if(sum<=k) ans++;
        else break;
    }
    cout<<ans<<nl;
    
}
return 0;
}