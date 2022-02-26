#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n,s=0;                                                         
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    sort(a,a+n);
    ll res=a[0];
    for (int i = 0; i <n-1; i++){
     res=max(res,a[i+1]-a[i]);
    }
    cout<<res<<"\n";
    
    
    
}
return 0;
}