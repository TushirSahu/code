#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
bool isPrime(int n){
    if(n <= 1) return 0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0) return 0;
        
    }
    return 1;
    
}
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
    int sum=accumulate(a,a+n,0);
    if(isPrime(sum)==0){
        cout<<n<<"\n";
        for (int i = 0; i < n; i++)
        {
           cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    
    else{
        int ind=-1;
       for (int i = 0; i < n; i++)
       {
           if(a[i]%2!=0){
               ind=i;
               break;
           }
       }
       cout<<n-1<<"\n";
       for (int i = 0; i < n; i++)
       {
           if(i!=ind) cout<<i+1<<" ";
       }
       cout<<"\n";
    }
    
}
return 0;
}