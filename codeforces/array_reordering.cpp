#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
ve v;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
//sort(a,a+n,greater<int>());
int cnt=0;
for (int i = 0; i < n; i++)
{
    if(a[i]%2==0) v.push_back(a[i]);
    
}
for (int i = 0; i < n; i++)
{
    if(a[i]%2==1) v.push_back(a[i]);
    
}for (int i = 0; i < v.size(); i++)
{
    for(int j=i+1;j<n;j++){
    if(__gcd(v[i],2*v[j])>1) cnt++;
    }
    
}
cout<<cnt<<nl;

}
return 0;
}