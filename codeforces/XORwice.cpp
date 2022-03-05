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
    int a,b;
    cin>>a>>b;
    int c=min(a,b);
    cout<<(a^b)<<nl;
}
return 0;
}