#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    set<int> s;
    for (int i = 1; i*i <= n; i++)
    {
        s.insert(i*i);
    }
    for (int i = 1; i*i*i <= n; i++)
    {
        s.insert(i*i*i);
    }
    cout<<s.size()<<nl;
    
    
    
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