#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]<k){
            k-=a[i];
            a[n-1]+=a[i];
            a[i]=0;
        }
        else{
            a[i]-=k;
            a[n-1]+=k;
            k=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<nl;
    
    
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