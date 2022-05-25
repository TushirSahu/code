#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> ve;
typedef vector<string> ves;
typedef vector<char> vec;
#define mod 1000000007
#define i_am_speed ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
#define mp map<<ll,ll>
#define st set<<ll,ll>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

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

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
string sol(string &s){
    ll num=0;
    for(auto &i:s){
     num+=(i-'0');
    }
    return to_string(num);
}

void solve(){
string s;
cin>>s;
ll sum=0;
while(s.size()>1){
  s=  sol(s);
    sum++;
}
cout<<sum;

}






int main(){
i_am_speed
#ifndef ONLINE_JUDGE
freopen("/home/tushir/coding/inputf.in", "r", stdin);
freopen("/home/tushir/coding/outputf.in", "w", stdout);
#endif
// int t;
// cin>>t;
// while(t--){
solve();
// }
return 0;
}