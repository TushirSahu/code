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
    int c1,c2;
    int n;
    int ans1=0,ans2=0;
    cin>>n;
    if(n%3==0){
    c1=n/3;
    c2=n/3;
    cout<<c1<<" "<<c2<<nl;
    }
 else {
    if(n%3==2){
        c2=n/3+1;
        c1=n-c2*2;
    }
    else if(n%3==1){
        c1=n/3+1;
        c2=(n-c1)/2;
    }
    cout<<c1<<" "<<c2<<nl;
 }
}
return 0;
}