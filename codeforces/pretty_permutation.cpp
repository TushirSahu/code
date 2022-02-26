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
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> ve;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
  if(n%2==0){
    for (int i = 1; i < n; i++)
    {
     swap(v[i-1],v[i]);
        i++;
    }
    for(auto i:v) cout<<i<<" ";
    cout<<nl;
 }
 else{
    v[0]=3;
    v[1]=1;
    v[2]=2;
    for (int i = 4; i < n; i++)
    {
        swap(v[i-1],v[i]);
        i++;
    }
    for(auto i:v) cout<<i<<" ";
    cout<<nl;
 }
    
}
return 0;
}