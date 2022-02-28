#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<INT_MAX<<nl;
int a=(1ll<<31)-1;//this is a signed int and 1 bit is reserved for the sign..so 31 bit number is the max here
cout<<a<<nl;
unsigned int b=(1ll<<32)-1;//it stores only +ve numbers
cout<<b<<nl;
return 0;
}