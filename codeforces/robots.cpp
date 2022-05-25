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
ll n,m;
cin>>n>>m;
vector<string> s;
for (int i = 0; i < n; i++)
{
   string x;
   cin>>x;
   s.eb(x); 
}
int row=INT_MAX;
int col=INT_MAX;
// int first=0;
bool flag=true;
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < m; j++)
   {
       if(s[i][j]=='R'){
          row=min(row,i);
          col=min(col,j);
        //   cout<<row<<" "<<col<<nl;
          
       }
    
      
   }  
}

if(s[row][col]=='R') cout<<"YES\n";
else cout<<"NO\n";


}
return 0;
}