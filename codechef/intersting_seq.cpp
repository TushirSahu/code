#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long int n,m=0;
    while(n%2==0){
        n=n/2;
        m=m+1;
    }
  cout<<m<<"\n";
}
return 0;
}