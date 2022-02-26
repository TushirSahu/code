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
    int k;
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>k;
        ans=max(ans,k-i);
    }
    cout<<ans<<"\n";
}
return 0;
}