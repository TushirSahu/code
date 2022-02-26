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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
   while(!is_sorted(a,a+n)){
       for (int i=ans %2 ; i < n-1; i+=2)
       {
           if(a[i]>a[i+1]){
               swap(a[i],a[i+1]);
           }
       }
       ans++;
   }
   cout<<ans<<"\n";
   
}
return 0;
}