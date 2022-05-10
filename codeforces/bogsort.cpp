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
    int a[n];
    for (int i = 0; i < n; i++)
    {
    cin>>a[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j =i+1; j < n; j++)
    //     {
    //         if((i+1)-a[i]==(j+1)-a[j]) swap(a[i],a[j]);
    //         else continue;
    //     }
        
    // }
    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<nl;
    
}
return 0;
}