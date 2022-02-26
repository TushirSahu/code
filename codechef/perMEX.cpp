#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
string s;
int n;
cin>>n;
cin>>s;
vector<int> v;
int y=1;
if(s[0]=='0'||s[1]=='0'||s[n]=='0'){

 cout<<"No\n";
 return;
}

v.push_back(0);
for (int i = 2 ;i < s.size()-1; i++)
{
    if(s[i]=='0') v.push_back(i);
    else{
       
        v.push_back(y);
         y=i;
    }
}
v.push_back(y);
cout<<"Yes\n";
for(auto i:v) cout<<i<<" ";
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