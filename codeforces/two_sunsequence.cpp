#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    string s;
    cin>>s;
    string t=s;
    sort(all(s));
   // string p;
    int index=-1;
    vector<char> v;
    vector<char> ve;
    for (int i = 0; i < s.length(); i++)
    {
        if(t[i]==s[0]) index=i;
        
    }
    cout<<s[0]<<" ";
 for (int i = 0; i < t.length(); i++)
 {
     if(i!=index) cout<<t[i];
 }
 cout<<nl;
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