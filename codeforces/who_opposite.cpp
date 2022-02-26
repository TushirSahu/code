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
    int a,b,c;
    cin>>a>>b>>c;
    int size=abs(a-b)*2;
    if(size<c) cout<<-1<<nl;
    else  {
     if((a==b+1|| a+1==b) && c==1) cout<<-1<<nl;
     else if(a>size || b>size) cout<<-1<<nl;
     else if(abs(a-b)+c>size) cout<<c-abs(a-b)<<nl;
     else cout<<c+abs(a-b)<<nl;
    }
}
return 0;
}