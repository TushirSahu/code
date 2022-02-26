#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    bool flag=true;
    //int ans=0;
    int c=n/2;
    if(n%2==0){
       for (int i = 0; i < n/2; i++)
       {
        if(s[i]!=s[c+i]){
        flag=false;
        }
      }
    }
    else flag=false;
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
solve();
}

return 0;
}