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
    int k;
    cin>>k;
    vector<int> v;
    for (int i = 1; i < 1667; i++)
    {
       if(i%3==0 || i%10==3) continue;
       else v.push_back(i);
       
    }
    
      cout<<v[k-1]<<nl;
    
    
}
return 0;
}