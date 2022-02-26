#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    if(n%2==0){
        cout<<max(a,b)/min(a,b)<<endl;
    }
    else{
        cout<<max(2*a,b)/min(2*a,b)<<endl;
    }

}
return 0;
}