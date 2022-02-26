#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int profit(int arr[],int n){
    int ans=0;
    sort(arr,arr+n,greater<int>());
    for(int i=0; i<n ;i++){
        if(arr[i]-i<=0){
            break;
        }
        ans=(ans%mod +(arr[i]-i)%mod )%mod;
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<profit(a,n)<<"\n";
    
  
}
return 0;
}