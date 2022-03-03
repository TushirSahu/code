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
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if((i+1)%2==1 && a[i]>0){
            v[i]=a[i]*(-1);
        }
        else if((i+1)%2==0 && a[i]<0) v[i]=a[i]*(-1);
        else v[i]=a[i];
    }
    if(a[0]<0) v[0]=a[0];
    else  v[0]=a[0]*(-1);

    for(auto i:v) cout<<i<<" ";
    cout<<nl;
}
return 0;
}