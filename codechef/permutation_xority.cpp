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
    int n,j;
    cin>>n;
    if(n<3) cout<<-1<<nl;
    //else if(n==4) cout<<"1 4 2 3"<<nl;
    else{
        if(n%2!=0){
            for (int i = 0; i < n; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<nl; 
        }
        else{
            cout<<"2 3 1 4 ";
            for (int i = 5; i < n+1; i++)
            {
                cout<<i<<" ";
                
            }
            
            cout<<nl;
            
        }
    }
}
return 0;
}