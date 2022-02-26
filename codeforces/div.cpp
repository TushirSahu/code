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
    int n;
    cin>>n;
    if(n%7==0){
        cout<<n<<"\n";
    }
    else{
        ll k=n%7;
        ll x=7-k;
        if(n%10>=7){
            cout<<n-k<<"\n";
        }
        else if(n%10<=3){
            cout<<n+x<<endl;
        }
        else{
            ll z=n%10;
            if(z>=k){
                cout<<n-k<<endl;
            }
            else{
                cout<<n+x<<endl;
            }
        }
    }
}
return 0;
}