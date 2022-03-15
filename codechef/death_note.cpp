#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int a[n];
 int r=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
 
    r+=a[i];
    cout<<r/m<<" ";
    r=r%m;
}
cout<<nl;


return 0;
}