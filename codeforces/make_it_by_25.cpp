#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
    int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.length();
    int ans=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            int val=(s[i]-'0')*10+(s[j]-'0');
            if(val%25==0){
                ans=min(ans,n-j-1+j-i-1);
            }
        }
        
    }
    cout<<ans<<"\n";
    
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}