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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t=s;
    int l=s.size();
   int count1=0,count0=0;
   for (int i = 0; i < n; i++)
   {
       if(s[i]=='0') count0++;
       else count1++;
   }
   if(n==1) cout<<"YES\n";
   else if(count1==1 && count0==1 && n==2  ) cout<<"YES\n"<<nl;
   else  cout<<"NO\n";

}
return 0;
}