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
ll a ,b,c;
cin>>a>>b>>c;
int res1=(a+b)*c;
int res2=a*(b+c);
int res3=a*(b*c);
int res4=a+(b*c);
int res5=a*b+c;
int res6=a+b+c;
int ans1=max(res1,res2);
int ans2=max(res4,res3);
int ans3=max(ans2,ans1);
int ans4=max(ans3,res5);
int ans5=max(ans4,res6);
cout<<ans5<<nl;
return 0;
}