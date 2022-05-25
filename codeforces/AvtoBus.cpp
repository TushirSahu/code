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
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
ll n;
cin>>n;

if(n<4) cout<<-1<<nl;
else{
ll ans1=n%4,ans2=n%6;
ll mini=-1,maxi=-1;
if(ans1==0||ans1==2) 
{
   maxi=n/4;
}
 if(ans2==0 || ans2==2|| ans2==4) mini=(n+5)/6;

if(maxi==-1 || mini==-1) cout<<-1<<nl;
else cout<<mini<<" "<<maxi<<nl;

}

}
return 0;
} 