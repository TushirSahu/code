#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
//cout<<fixed<<setprecision(10);
while(t--){
    ll n;
    cin>>n;
    vector<double > a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    double sum=0;
    for (int i = 0; i < n-1; i++)
    {
         sum+=a[i];
    }
   
    
    cout<<setprecision(10)<<a[n-1]+(sum/(n-1))<<nl;
    
}
return 0;
}