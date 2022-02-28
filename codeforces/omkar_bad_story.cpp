#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
   int x;
    bool flag=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x < 0){
            flag=1;
            //break;
        
        }
    }
    if(flag) {
        cout<<"NO\n";
        return;
    }
    else{
        cout<<"YES\n";
        cout<<101<<nl;
        for (int i = 0; i < 101; i++)
        {
            cout<<i<<" ";
        }
        cout<<nl;
        
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