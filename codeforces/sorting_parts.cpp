#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int> v1;
       vector<int> v2;
       for (int i = 0; i <n; i++)
       {
           int x;
           cin>>x;
           v1.push_back(x);
           v2.push_back(x);
       }
       sort(v2.begin(),v2.end());
       if(v1==v2) cout<<"NO\n";
       else if(v1[0]>=v1[n-1]) cout<<"YES\n";
       else{
           cout<<"YES\n"
       }
       
        
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}