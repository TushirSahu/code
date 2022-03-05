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
    int c,d;
    cin>>c>>d;
    
    if( c==0 && d==0) cout<<0<<nl;
   else if(c==d&& c!=0 && d!=0) cout<<1<<nl;
    else if(abs(c-d)%2!=0) cout<<-1<<nl;
    else cout<<2<<nl;

    
}
return 0;
}