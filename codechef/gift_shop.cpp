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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        if(sum>k){
            sum-=a[i];
            sum+=(a[i]+1)/2;
            if(sum>k) break;
            else cnt++;
        }
        else cnt++;
    }
    cout<<cnt<<nl;
    
    
}
return 0;
}