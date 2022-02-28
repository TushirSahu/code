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
    int x,y;
    cin>>x>>y;
    int c=min(x,y);
    int d=(x+y)/2;
    if((x+y)%2==1) cout<<-1<<" "<<-1<<nl;
    else if(c==y && (d-c)>=0){
        cout<<d-c<<" "<<y<<nl;
    }
    else if(c==x && (d-c)>=0){
        cout<<x<<" "<<d-c<<nl;
    }
    
}
return 0;
}