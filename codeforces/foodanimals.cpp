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
    ll a,b,c,x,y;
cin>>a>>b>>c>>x>>y;
if(x-a>0){
    if(c>=x-a){
        c-=(x-a);
    }
    else{
         cout<<"NO\n";
         return;}
}
if(y-b>0){
    if(y-b<=c){
        c-=(y-b);
    }
    else {
        cout<<"NO\n";
    return;}
}
cout<<"YES\n";
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