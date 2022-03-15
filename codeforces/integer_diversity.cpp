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
    set<ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        auto it=m.find(x);
        if(it==m.end()){
            m.insert(x);
        }
        else{
            m.insert(-x);
        }
    }
    cout<<m.size()<<nl;
    
}

return 0;
}