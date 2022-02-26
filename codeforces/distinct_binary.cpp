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
    string s;
    cin>>s;
    int count=0;
   for (int i = 1; i < n; i++)
   {
      if((s[i]=='0' && s[i-1]=='1' )||(s[i]=='1' && s[i-1]=='0')){
          count++;
      }
   }
   cout<<count+1<<nl;
    
}
return 0;
}