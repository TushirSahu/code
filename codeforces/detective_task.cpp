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
     string s;
cin>>s;
if(s.length()==1) {
    cout<<1<<nl;
    return;}
int temp=s.length()-1;
for (int i = 0; i < s.length(); i++)
{
    if(s[i]=='0' )
    {
         temp=i;
         break;
    }
}
int temp1=0;
for (int i = s.length()-1; i>=0; i--)
{
    if(s[i]=='1'){
      temp1=i;
      break;    }
}
cout<<abs(temp1-temp)+1<<nl;


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