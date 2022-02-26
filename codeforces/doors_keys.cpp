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
   unordered_set<char> m;
    
    bool flag=true;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=90){
            if(m.find(s[i]+32)==m.end()) {
                flag=false;
                break;
            }
        }
        else m.insert(s[i]);
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    
    
}
return 0;
}