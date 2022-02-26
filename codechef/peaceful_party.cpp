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
    int n,w;
    cin>>n>>w;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
   sort(a,a+n,greater<int>());
    int ans=0;
    int size=0;
    for (int i = 0; i < n; i++)
    {
        ans+=a[i];
        if(ans>=w){
            size++;
            break;
        }
        else {
            size++;
            continue;
        }
    }
    cout<<n-size<<nl;
    
}
return 0;
}