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
    string s[n-2],res="";
    bool flag=true;
   
    for (int i = 0; i < n-2; i++)
    {
        cin>>s[i];
        if(i==0){
            res+=s[i];
        continue;
        }
     else{
      if(s[i][0]==s[i-1][1]){
          res+=s[i][1];
      }
      else {
          res+=s[i];
          flag=false;
      }

     }

        
    }
    if(flag==true) res+="a";
    
    cout<<res<<nl;
    
}
return 0;
}