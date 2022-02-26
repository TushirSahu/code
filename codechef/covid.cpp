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
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int stop=x;
    bool flag=false;
    x=(x+k)%n;
    if(x==y){
     flag=true;
    }
    while(stop!=x){
        x=(x+k)%n;
		if(x==y)
	{
	flag=true;
	break;
	}			
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
return 0;
}