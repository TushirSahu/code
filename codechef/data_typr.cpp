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
    int n,x;
    cin>>n>>x;
 if(n>=x)  {
  cout<<x<<endl; 
}
else{
    while(x>n){
        x=x-n-1;
    }
    cout<<x<<endl;
 } 
}
return 0;
}