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
ll n;
cin>>n;
ll a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int ind1=0;
int ind2=n-1;
int suma=a[0],sumb=a[n-1];
int p=0;
int p1=0;
while(ind1<ind2){
   if(suma>sumb){
       ind2--;
       sumb+=a[ind2];
        
   }
   else if(suma<sumb){
      ind1++; 
       suma+=a[ind1];

       
   }
   else{
    //    cout<<ind1<<" "<<ind2</<nl;
      p=(ind1+1)+(n-ind2);
      ind1++;
      suma+=a[ind1];
   }
}
cout<<p<<nl;
}
return 0;
}