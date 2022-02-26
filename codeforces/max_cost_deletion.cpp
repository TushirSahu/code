#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void sol(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int c=1;
    for (int i = 1; i < n; i++)
    {
        if(s[i]!=s[i-1]) c++;
    }
    if(b>=0) cout<<(a+b)*n<<nl;
    else cout<<a*n+(c/2+1)*b<<nl;
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    sol();
}
return 0;
}