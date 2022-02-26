#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
    ll n,p,w,d;
    cin>>n>>p>>w>>d;
    for(ll y=0;y<w;y++){
        if(p-y*d<0) break;
        if((p-y*d)%w==0){
            ll x=(p-y*d)/w;
            if(x+y<=n){
                cout<<x<<" "<<y<<" "<<n-x-y;
                return;
            }

        }
    }
    cout<<"-1\n";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    solve();
return 0;
}