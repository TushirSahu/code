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
    
bool CheckVowel(char c){
    if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u') return true;
    return false;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
string s,t;
cin>>s>>t;
ll n=s.size();
bool flag=true;
for (int i = 0; i < n; i++)
{
  if((CheckVowel(s[i])==false && CheckVowel(t[i])==false)|| (CheckVowel(s[i])==true && CheckVowel(t[i])==true)){
      continue;
  }
  else {
      flag=false;
      break;
  }
}
if(s.size()!=t.size()) cout<<"no\n";
else if(flag) cout<<"yes\n";
else cout<<"no\n";

return 0;/* code */
}