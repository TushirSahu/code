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
    cout<<4*n-2<<" ";
    for (int i = 2; i <= n; i++)
    { 
      cout<< 4*n-2*i<<" ";
    }
    cout<<nl;
}
return 0;
}