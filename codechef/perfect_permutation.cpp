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
    int n,k;
    cin>>n>>k;
    if(n-1==k) {
        cout<<n<<" ";
    for (int i = 1; i < k; i++)
    {
        cout<<i+1<<" ";
    }
    cout<<1<<nl;
    }
    else{
     for (int i = 0; i < k; i++)
     {
         cout<<i+1<<" ";
     }
     for (int i = k; i < n-1; i++)
     {
         cout<<i+2<<" ";
     }
     if(k!=n) cout<<k+1<<" "; 
     cout<<nl;
     
    }
    
}
return 0;
}