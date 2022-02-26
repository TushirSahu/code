#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,a,b,c,d;
cin>>n>>m;
int t;
cin>>t;
while(t--){
 cin>>a>>b>>c>>d;
 if(a>c){
    cout<<"-1\n";
    }
    else{
   cout<<abs((c-a)+(d-b))<<"\n";
    }
}
return 0;
}