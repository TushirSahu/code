#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(int s){
     ll sq=sqrt(s);
     if((sq*sq)==s) cout<<sq<<nl;
     else{
     cout<<(sq+1)<<nl;
     }

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int s;
    cin>>s;
    solve(s);
}
return 0;
}