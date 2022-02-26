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
    int n;
    cin>>n;
    vector<int> v(n);
   for(int &value:v){
       cin>>value;
   }
    
    int k= *min_element(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        v[i]-=k;
    }
     int ans=0;
   for (int i = 0; i < n; i++)
   {
       ans=__gcd(ans,v[i]);
   }
   if(ans==0) cout<<"-1\n";
   else cout<<ans<<"\n";
   
    
    

}
return 0;
}