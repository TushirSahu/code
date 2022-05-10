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

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<pair<int,int>> v;
for (int i = 0; i < m; i++)
{ int x,y;
   cin>>x>>y;
    v.pb({x,y});
}
sort(all(v),sortingdescending);
// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i].first<<" "<<v[i].second<<nl;
// }


ll ans=0;

for (int i = 0; i < v.size(); i++)
{  
    if(n!=0 && n>=v[i].first){
    ans+=(v[i].first)*v[i].second;
    n-=v[i].first;
    }
     else if(n!=0 && n<=v[i].first){
         ans+=n*v[i].second;
         break;
         
     }
    

    
}
cout<<ans<<nl;


return 0;
}
