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
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i+1);
    }
    for(auto i:v) cout<<i<<" ";
    cout<<nl;
    

}
return 0;
}