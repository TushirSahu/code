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
ll x;
cin>>x;
vector<string> v;
 if(x%3==0) {
  x/=3;
  for (int i = 0; i < x; i++)
  {
      cout<<"21";
  }
  cout<<nl;
  
 }
 else if(x%3==1){
         x/=3;
         for (int i = 0; i < x; i++)
         {
             cout<<"12";
         }
         cout<<"1"<<nl;

     }
 else{
     x/=3;
     for (int i = 0; i < x; i++)
     {
         cout<<"21";
     }
     cout<<"2"<<nl;
 }


}
return 0;
}