#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    if(n%2==1) cout<<-1<<nl;
    else{
        cout<<0<<" "<<n/2<<nl;
        cout<<n/2<<" "<<0<<nl;
        cout<<0<<" "<<-(n/2)<<nl;
        cout<<-(n/2)<<" "<<0<<nl;

    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
    solve();
//}
return 0;
}