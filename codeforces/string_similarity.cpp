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
    for (int i = 0; i < s.size(); i++)
    {
      if((i+1)%2==1) cout<<s[i];
       
    }
    cout<<nl;
    
}
return 0;
}