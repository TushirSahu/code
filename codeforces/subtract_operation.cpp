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
ll n,k;
cin>>n>>k;
unordered_set<ll> s;
ve v;
int a[n];
unordered_map<ll,ll> m;
ll sum=0;
bool flag=false;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    
   // sum+=a[i];
}
if(n==1 && a[0]==k){
    flag=true;
}
else{
    sort(a,a+n);
    int i=0;
    int j=1;
    while(i<n && j<n){
        if(a[i]+abs(k)==a[j]){
            flag=true;
            break;
        }
        else if(a[i]+abs(k)<a[j]) i++;
        else j++;

        
    }
}
if(flag) cout<<"YES\n";
else cout<<"NO\n";


 
}
return 0;
}