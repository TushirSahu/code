#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
    ll n, k;
    cin>>n>>k;
    if(n==1 && k==1){
        cout<<"1\n";
    }
    else{
        if(k<2 || k>n){
            cout<<"-1\n";
        }
        else{
            int b=0;
            for (int i = 0; i < k-1; i++)
            {
                cout<<(i+1)<<" ";
                b=i;
            }
            for(int i=0;i<n-b-1;i++){
                cout<<(n-i)<<" ";
            }
            cout<<"\n";
        }
    }

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}