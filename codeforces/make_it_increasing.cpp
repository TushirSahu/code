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
    
void sol(){
    ll n;
cin>>n;
ll a[n];
for (ll i = 0; i < n; i++)
{
    cin>>a[i];
}
ll maxi=a[n-1];
ll cnt1=0;
bool flag=true;
int i=2;
if(n==1 ){
    cout<<0<<nl;
    return;
}
int cnt=0;
for (int i = n-2; i >-1; i--)
{  
    while(a[i]>=a[i+1] && a[i]){
        cnt++;
        a[i]/=2;
        
        }
    
    // maxi=a[i];
}
for (int i = 0; i < n-1; i++)
{
    if(a[i]>=a[i+1]){
        cout<<-1<<nl;
        return;
    }
}




    cout<<cnt<<nl;

}  
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
sol();
}
return 0;
}