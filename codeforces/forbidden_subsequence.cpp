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
    string s,t;
    cin>>s>>t;
    int n=s.length();
sort(s.begin(),s.end());
unordered_map<char,ll> m;
for (int i = 0; i <n; i++)
{
    m[s[i]]++;
}
if(t!="abc" ||m['a']==0||m['b']==0||m['c']==0) cout<<s<<nl;
else{
    string ans="";
    while(m['a']--) ans+='a';
    while(m['c']--) ans+='c';
    while(m['b']--) ans+='b';
    for (char i = 'd'; i <= 'z'; i++)
    {
        ans+=string(m[i],i);
    }
    cout<<ans<<nl;
    
    
}
}

return 0;
}