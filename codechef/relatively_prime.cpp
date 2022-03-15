#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll l,r;
cin>>l>>r;
vector<pair<int,int>> v;
int t=(r-l+1)/2;
cout<<"YES\n";
for (int i = 0; i < (r-l)/2+1; i++)
{
   cout<<l+2*i<<" "<<l+2*i+1<<nl;
}
// for(auto i:v) cout<<i.first<<" "<<i.second<<nl;
return 0;
}