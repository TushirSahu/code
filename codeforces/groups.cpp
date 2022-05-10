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
    vector<vector<int>>v;
    vector<int>temp(5);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>temp[j];
        }
        v.push_back(temp);
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==1)
                m[j+1]++;
        }
    }
    bool flag=false;
    // cout<<v.size()<<nl;
    for(auto val:m)
    {
       if(val.second<n/2) {
           flag=true;
           break;
       }
       
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
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