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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i < n-1; i+=3)
    {
        v[i-1]=v[i]*2;
        v[i+1]=v[i]*2;
    }
    if(n%3==2){
    v[n-2]=v[n-1]*2;
    }
    if(n%3==1){
        v[n-1]=v[n-2]*2;
    }
    for(auto i:v) cout<<i<<" ";
    cout<<nl;
}
return 0;
}