#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
   string s ;
   cin>>s;
   if(n==1) cout<<-1<<" "<<-1<<nl;
   else{
       bool flag=true;
       char ch=s[0];
   for (int i = 1; i < n; i++)
   {
       if(i==0) continue;
       else if(s[i]!=ch){
           cout<<i<<" "<<i+1<<nl;
           flag=false;
           break;
       }
   }
   if(flag) cout<<-1<<" "<<-1<<nl;
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