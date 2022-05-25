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
if(n<k) cout<<"NO\n";
else{
    if(n==k){
        cout<<"YES\n";
        for (int i = 0; i < k; i++)
        {
           cout<<1<<" ";
        }
        
        cout<<nl;
    }
    else{
        int x=n-(k-1);
        int y=n-2*(k-1);
        if(x>0 &&x%2==1){
            cout<<"YES\n";
        
            for (int i = 0; i < k-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<x<<nl;
            
        }
        else if(y>0 && y%2==0){
            cout<<"YES\n";
            for (int i = 0; i < k-1; i++)
            {
                cout<<2<<" ";
            }
            cout<<y<<nl;
        }
        else cout<<"NO\n";
    }
}

}
return 0;
}
