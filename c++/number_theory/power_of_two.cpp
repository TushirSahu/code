#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
bool Poweroftwo(int n){
    return (n!=0 && ((n&(n-1))==0));
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<Poweroftwo(16)<<nl;
return 0;
}