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
string s;
cin>>n>>s;

ll ans=s[n-1]-'0';
for (int i = 0; i < n-1; i++)
{
    if(s[i]!='0'){
        ans++;
        ans=ans+s[i]-'0';
    }
}
cout<<ans<<"\n";
}


return 0;
}
