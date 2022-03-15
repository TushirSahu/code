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
    int n,d;
    cin>>n>>d;
    int a[n];
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ind=-1;
    
    if(a[n-1]==d) cout<<"YES\n";
    else{
       
        
         if(a[0]+a[1]<=d || a[n-1]<d) cout<<"YES"<<nl; 
        else cout<<"NO\n";    }
    
   
      
    
}
return 0;
}