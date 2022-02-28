#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    int v[n];
    //int sum=0;
    for (int i = 0; i < n;i++)
    {
        cin>>v[i];
    }
    sort(v,v+n);
    int count=0;
    int m=v[0];
    for (int i = 0; i < n; i++)
    {
        if(v[i]==m) count++;
    }
    cout<<n-count<<nl;
    
    
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