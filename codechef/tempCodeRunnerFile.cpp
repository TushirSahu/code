#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int total(ll n){
    vector<int> v;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
        ll x=abs(a[i]-a[i-1])-1;
        v.push_back(x);
    }
    ll sum=accumulate(v.begin(),v.end(),0);
    return sum;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
        
    // }
  cout<<total(n)<<endl;  
    
}
return 0;
}