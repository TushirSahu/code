#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[2*n];
for (int i = 0; i < 2*n; i++)
{
    cin>>a[i];
}
sort(a,a+2*n);
int cnt=0;
bool flag=true;
for (int i = 0; i < 2*n-1; i++)
{
    if(a[i]==a[i+1]) continue;
    else{
        flag=false;
        break;
    }
}
if(flag) cout<<-1<<nl;
else{
    for (int i = 0; i < 2*n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<nl;
    
}

return 0;
}