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
    int n;
    cin>>n;
    vector<int> v(n);
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    if(is_sorted(all(v))) cout<<0<<nl;
    else if(v[0]==1 || v[n-1]==n) cout<<1<<nl;
    else if(v[0]==n && v[n-1]==1 )cout<<3<<nl;
    else cout<<2<<nl;
    }
return 0;
}