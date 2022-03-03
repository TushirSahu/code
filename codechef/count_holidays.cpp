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
    int a[n];
    int cnt=0;
    vector<int> v={6,13,20,27,7,14,21,28};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        auto it=find(v.begin(),v.end(),a[i]);
        if(it==v.end()) cnt++;
        else continue;
    }
    cout<<v.size()+cnt<<nl;
}
return 0;
}