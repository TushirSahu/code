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
    
    
ll solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll lower=0,upper=0,special=0,number=0;
for(auto i:s){
    if(i>='A' && i<='Z') {
        upper++;
    }
    else if(i>='a' && i<='z') {
        lower++;
    }
    else if(i>='0' && i<='9') {
        number++;
    }
    else {
        special++;
    }
}
    if(upper==0){
        s+='A';
        n++;
    } if(lower==0){
        s+='a';
        n++;
    } if(number==0){
        s+='0';
        n++;
    } if(special==0){
        s+='$';
        n++;
    }
    while(n<7) {
        s+='$';
        n++;
    }
    cout<<s<<nl;
    return 0;
    }
    

int main(){
i_am_speed
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/codeforces/intputf.txt", "r", stdin);
    freopen("/home/tushir/coding/codeforces/outputf.txt", "w", stdout);
    #endif
ll t=1;
cin>>t;
for(ll i=1;i<=t;i++)
{  
cout<<"Case #"<<i<<": ";
solve();

}
return 0;
}