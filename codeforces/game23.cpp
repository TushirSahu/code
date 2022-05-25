#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> ve;
typedef vector<string> ves;
typedef vector<char> vec;
#define mod 1000000007
#define i_am_speed ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
#define mp map<<ll,ll>
#define st set<<ll,ll>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
    
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
    
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
    
    
void solve(){

    ll n,m;
    cin>>n>>m;
    if(m%n!=0  ){
        cout<<-1<<nl;
        return;
    }
    if(n==m ){
        cout<<0<<nl;
        return;
    }
    ll x=m/n;
    ll ans=0;
    while(x%2==0){
         x/=2;
         ans++;
    }
    while(x%3==0){
        x/=3;
        ans++;
    }
    if(x!=1){
        cout<<-1<<nl;
        return;
    }
    cout<<ans<<nl;
    
}
int main(){
i_am_speed
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
// int t;
// cin>>t;
// while(t--){
solve();
// }
return 0;
}