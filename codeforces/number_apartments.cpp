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
    if(n%3==0) cout<<n/3<<" "<<0<<" "<<0<<nl;
    else if(n%5==0) cout<<0<<" "<<n/5<<" "<<0<<nl;
    else if(n%7==0) cout<<"0 0 "<<n/7<<nl;
    else{
        int ans1=0,ans=0;
       //bool flag=false;
        for (int i = 1; i < n; i++)
        {
            if((n-5*i)%3==0){
            ans=(n-5*i)/3;
            ans1=i;
          //  flag=true;
            break;
            }
            
        }
        if(n==4|| n==1|| n==2) cout<<-1<<nl;
        else  cout<<ans<<" "<<ans1<<" "<<0<<nl;
    }
}
return 0;
}