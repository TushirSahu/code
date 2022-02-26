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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> b;
    b.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=a[i-1]) b.push_back(a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if(a[i]==a[i-1]) b.push_back(a[i]);
    }
    for(auto v:b) cout<<v<<" ";
    cout<<nl;
    
    
    
}
return 0;
}