#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
   vector< int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   if(a[n-1]<a[n-2]) cout<<-1<<nl;
   else {
    if(a[n-1]<0){
       if(is_sorted(a.begin(),a.end())) cout<<0<<nl;
       else cout<<-1<<nl;
    }
    else{
        cout<<n-2<<nl;
        for (int i = 0; i < n-2; i++)
        {
            cout<<i+1<<" "<<n-1<<" "<<n<<nl;
        }
        cout<<nl;
        
    }
   }
  
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
solve();

}
return 0;
}