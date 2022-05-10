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
string s;
cin>>s;
ll sum=0;
        for (int i = 0; i < s.length(); i++)
        {
            sum+=s[i]-'a'+1;
        }
if(s.length()==1) {
    int ans=s[0]-'a';
    cout<<"Bob "<<ans+1<<nl;
}

else{
    if(s.length()%2==0){
        
        cout<<"Alice "<<sum<<nl;
    }
    else{
        int n=s.length();
        int res=max(sum-(s[0]-'a'+1),sum-(s[n-1]-'a'+1));
        int ans=sum-res;
         cout<<"Alice "<<abs(ans-res)<<nl;
        // else cout<<"Bob "<<abs(ans-res)<<nl;
          }
}
}
return 0;
}