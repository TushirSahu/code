#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

void printBinary(int n){
    for (int i = 10; i >=0; i--)
    {
        cout<<((n>>i)&1);
    }
    cout<<nl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

printBinary(9);
int a=9;
int i=3;
if((a & (1<<i) )!=0) cout<<"Set Bit"<<nl;
else cout<<"Unset bit"<<nl;
//counting set bit in binary
int cnt=0;
for (int i = 31; i >= 0; i--)
{
    if((a & (1<<i))!=0) cnt++;
}
cout<<cnt<<nl;
cout<<__builtin_popcount(a)<<nl;//its is for int only
cout<<__builtin_popcountll((1ll<<35)-1)<<nl;
return 0;
}