#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
    
ll gcd(ll a,ll b){
 if(b==0)return a;
return gcd(b,a%b);}
    
void digits(int n){
 cout<<floor(log10(n)) + 1;}
    
 bool sortingdescending(pair<int,int> a,pair<int,int> b){
if( a.second<b.second) return false;
return true;
}
    
bool poweroftwo(ll x) {
return x && (!(x & (x-1)));
}
    
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//  #ifndef ONLINE_JUDGE
//         freopen("/home/tushir/coding/inputf.in", "r", stdin);
//         freopen("/home/tushir/coding/outputf.in", "w", stdout);
//     #endif
int t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    if(n==1 && m==1) cout<<0<<nl;
    else if(n==1 && m-1>1) cout<<-1<<nl;
    else if(m==1 && n-1>1) cout<<-1<<nl;
    else if(n==2 && m==1) cout<<1<<nl;
    else{
        int x=max(n,m);
        if((n+m)%2==0) cout<<2*(x-1)<<nl;
        else cout<<2*(x-1)-1<<nl;
    }

}
return 0;
}