#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll val1=max(a,max(b,c)+1);
    cout<<val1-a<<" ";
ll val2=max(b,max(a,c)+1);
    cout<<val2-b<<" ";
ll val3=max(c,max(a,b)+1);
    cout<<val3-c<<"\n";



}
return 0;
}