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
    string s;
    cin>>s;
    int n=s.length();
   // cout<<n<<nl;
   bool flag=false;
      if( n%2==0 && s[0]!=')' && s[n-1]!='('){
      
   
    cout<<"YES\n";
      }
    else cout<<"NO\n";
    
    
}
return 0;
}