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
    int cnt=0;
    int maxi=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=s[0] && s[i]!=s[s.length()-1]) cnt++;
        else cnt=0;
    
      maxi=max(maxi,cnt);
    }
      if(maxi==0) cout<<-1<<nl;
      else cout<<maxi<<nl;   
    
}
return 0;
}