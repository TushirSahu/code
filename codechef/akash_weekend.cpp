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
    int x=(n+1)/7;
    if(n<=5){
    cout<<0<<nl;
    }
    else cout<<x<<nl;

}
return 0;
}