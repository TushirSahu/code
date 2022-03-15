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
    ll s;
    cin>>s;
    vector<ll> v;
    ll even=0;
    while(s>0){
        int temp=s%10;
        if(temp%2==0) even++;
        v.push_back(temp);
        s/=10;
    }
     if(v[0]%2==0) cout<<0<<nl;
    
    else if(v[v.size()-1]%2==0) cout<<1<<nl;
    
     else{
        bool flag=false;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]%2==0){
                flag=true;
                break;
            }
        }
        if(flag)cout<<2<<nl;
        else cout<<-1<<nl;
     }
    
    

}
return 0;
}