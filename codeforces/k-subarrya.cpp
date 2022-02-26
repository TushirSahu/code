#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nline "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first;//1 -4 0 -2
        v[i].second=i;//  0 1  2  3  
    }
    sort(all(v));// -4 -2 0 1
    int ans=0;   //  1  3 2 0
    for (int i = 1; i < n; i++)
    {
        if(v[i-1].second+1!=v[i].second) ans++;
    }
    if(ans<k) cout<<"YES\n";
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