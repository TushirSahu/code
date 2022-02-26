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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
      cin>> v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
      cin>> v[i].second;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
       if(v[i].first<=k){
           k+=v[i].second;
       }
    }
    cout<<k<<"\n";
    
    
}
return 0;
}