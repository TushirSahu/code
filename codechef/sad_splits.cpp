#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n>0){
//        int temp=n%10;
//        v.push_back(temp);
//        n/=10;
//     }
//     int cnt1=0,cnt2=0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]%2==0) cnt1++;
//         else cnt2++;
//     }
//     if(cnt2>=2 || cnt1>=2) cout<<"YES\n";
//     else cout<<"NO\n";

// }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){
    // solve();
    string n;
   cin>>n;
   int cnt1=0,cnt2=0;
   for (int i = 0; i < n.length(); i++)
   {
       if((n[i]-'0')%2==0)cnt1++;
       else cnt2++;
   }
   int k=n.size();
  if(cnt1>=2 || cnt2>=2) cout<<"YES\n";
  else cout<<"NO\n";
}
return 0;
}