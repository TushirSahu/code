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
    int n;
    cin>>n;
    if(n%4!=0) cout<<"NO\n";
    else{
        cout<<"YES\n";
        for (int i = 1; i <= n/2; i++)
        {
            cout<<i*2<<" ";
        }
        for (int i = 1; i < n/2; i++)
        {
            cout<<2*i-1<<" " ;
        }
        cout<<(n-1)+n/2<<nl;
        
        
    } 
}
return 0;
}