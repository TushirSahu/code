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
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int r=n-1,b=1;
    ll sum1=a[0],sum2=0;
    
    //cout<<sum1<<nl;
    bool flag =false;
    while(r>(n/2)){
        sum1+=a[b],sum2+=a[r];  
         r--,b++;
      if(sum2>sum1){
          flag=true;
          break;
      }  
      else continue;
       
     

    }
    if(flag ) cout<<"YES\n";
    else cout<<"NO\n"; 

}
    

return 0;
}
