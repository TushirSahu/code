#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string v;
    cin>>v;
    string temp=v;
    sort(all(v));
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if(temp[i]!=v[i]) c++;
        else continue;
    }
    cout<<c<<nl;
}
return 0;
}