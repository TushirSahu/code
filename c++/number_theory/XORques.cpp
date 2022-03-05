#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//given an array all elements coutn are even except for one find that one element
//o(N) timecomplexity and o(1) space complexity

int n;
cin>>n;
int a[n];// a,a,b,b,c
int ans=0;
for (int i = 0; i < n; i++) //a^a==0
{
    ans^=a[i];  // a^a^b^b^c==c^0==c
}
cout<<ans<<nl;



return 0;
}