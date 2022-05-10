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
    if( x%5!=0 && x%10!=0) cout<<-1<<nl;
    else{
        if(x%10==0) cout<<x/10<<nl;
        else{
            cout<<(x-5)/10+1<<nl;
        }
    }
}
return 0;
}