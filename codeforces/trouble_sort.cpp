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
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cnt1=0,cnt0=0;

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if(b[i]==1) cnt1++;
        else cnt0++;
    }
    if(is_sorted(a,a+n)) cout<<"Yes\n";

    else{
        if(cnt1==n|| cnt0==n) cout<<"No\n";
        else if(cnt1>=1 && cnt0>=1) cout<<"Yes\n";
    }

    
}
return 0;
}