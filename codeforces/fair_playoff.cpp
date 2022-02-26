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
    int a[4];
    // int s1,s2,s3,s4;
    // cin>>s1>>s2>>s3>>s4;
    vector<int> v;

    for (int i = 0; i <4; i++)
    {
        cin>>a[i];
    }
    if(max(a[1],a[0])<min(a[2],a[3])|| (max(a[2],a[3])<min(a[1],a[0]))) cout<<"NO\n";
    else cout<<"YES\n";
}
return 0;
}