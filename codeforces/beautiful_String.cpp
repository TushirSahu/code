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
    char c[3]={'a','b','c'};
    bool flag=true;
    
    for (int i = 0; i < s.length(); i++)
    {
       if(s[i]=='?'){
           for (int j = 0; j< 3; j++)
           {
               if(c[j]!=s[i-1] && c[j]!=s[i+1]){
                   s[i]=c[j];
                   break;
               }
           }
           continue;
       }
       
    }
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1]) flag=false;
    }
    if(flag==false) cout<<"-1\n";
    else cout<<s<<nl;
    
}
return 0;
}