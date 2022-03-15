#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k,d;
cin>>k>>d;
 if(d==0 && k==1) cout<<0<<nl;
 else if(d>0) {
     int ans=1;
     cout<<d;
     for (int i = 1; i < k; i++)
 {
       cout<<0;
 }
 cout<<nl;
 }
 
 else cout<<"No solution\n";

return 0;
}