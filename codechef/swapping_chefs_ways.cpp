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
    string s;
    cin>>s;
  //  string p=s;
    
    for (int i = 0,j=n-1; i <= j; i++,j--)
    {
        if(s[i]>s[j]){
             swap(s[i],s[j]);
        }
    }
    bool flag=true;
    for (int i = 0,j=1; j < n; i++,j++)
    {
        /* code */
        if(s[i]>s[j]){
            flag=false;
            break;
        }
    }
    
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
    
return 0;
}