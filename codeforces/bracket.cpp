#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void bracket(int n){
  for (int i = 0; i < n; i++)
  {
      cout<<"(";
  } for (int i = 0; i < n; i++)
  {
      cout<<")";
  }
  
}
void solve(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        bracket(i);
        bracket(n-i);
        cout<<nl;
        
    }
    
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