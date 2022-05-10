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
int n;
cin>>n;
int a[n];
int cnt0=0,cnt1=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if(a[i]==0) cnt0++;
    else if(a[i]==1) cnt1++;
}
if(cnt1!=0 && cnt0!=0) cout<<"NO\n";
else if(cnt1==0) cout<<"YES\n";
else{
    bool flag=true;
    sort(a,a+n);
    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1]==a[i]+1){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}

}
return 0;
}