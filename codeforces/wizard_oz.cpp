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
    if(n==1 )cout<<9<<nl;
    else if(n==2) cout<<98<<nl;
    else if(n==3) cout<<989<<nl;
    else{
        cout<<989;
      for (int i = 3; i < n; i++)
      {
          cout<<(i-3)%10;
      }
      cout<<nl;
      
    }
    
}
return 0;
}