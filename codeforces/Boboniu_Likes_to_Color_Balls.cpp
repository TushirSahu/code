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
    ll r,b,g,w;
cin>>r>>b>>g>>w;
if(r%2+w%2+g%2+b%2<=1){
    cout<<"Yes\n";
    return;
}
// r-=1,w+=1,g-=1,b-=1;
if((r-1)%2+(w+1)%2+(g-1)%2+(b-1)%2<=1 && r>0 && g>0 && b>0){
    cout<<"Yes\n";
    return;
}
cout<<"No\n";
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