#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
    string s;
    cin>>s;
    if(s[0]!=s[s.length()-1]){
        s[0]=s[s.length()-1];
    }
    cout<<s<<"\n";
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