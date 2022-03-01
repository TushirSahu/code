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
    int x;
    cin>>x;
    int moves=0;
    while((moves*(moves+1)/2<x) )moves++;
    if((moves*(moves+1)/2-1==x) )moves++;

    cout<<moves<<nl;


}
return 0;
}