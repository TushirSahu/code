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
    int a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
      cin>>a[i];
    }
    sort(a,a+2*n);
    int x[n+1];
    for (int i = 0; i < n+1; i++)
    {
        x[i]=0;
    }
    for (int i = 0; i < 2*n; i++)
    {
        x[a[i]]++;
    }
    int count=1;
    for (int i = 0; i < n+1; i++)
    {
        if(x[i]!=0 && x[i]==1){
            count=0;
            break;
        }
        if(x[i]==0)
        break;
    }
    if(count==0) cout<<"NO\n";
    else{
        cout<<"YES\n";
    }
    
    
}
return 0;
}