#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int dig(ll n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
 return c;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
 while(t--){
    ll n;
    cin>>n;
    ll k=(dig(n)-1)*9;
    int temp=0;
    int i=0;
 while(i<dig(n)){
    temp=temp*10;
    temp=temp+1;
    i++;
}
int s=temp;
while(temp<=n){
    k++;
    temp+=s;
}
cout<<k<<"\n"; 
 
 }
return 0;
}