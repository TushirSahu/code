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
    int n,m;
    cin>>n>>m;
   // int k=(n*m)/2;
   string s[n][m];
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           s[i][j]='B';
       }
       
   }
   s[0][0]='W';
    for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           cout<<s[i][j];
       }
       cout<<nl;
   }
   //cout<<nl;
}
return 0;
}