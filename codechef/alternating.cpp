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
   int a[n];
   int x=1;
   if(n==1) cout<<1<<nl;
   else{
   for (int i = 0; i < n-1; i+=2)
   {
       a[i]=x;
       a[i+1]=2*x;
       x+=2;
       
   }
   
   if(n%2!=0) a[n-1]=a[n-2]+1;
   for (int i = 0; i < n; i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<nl;
   }
   
}
return 0;
}