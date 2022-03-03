#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ve(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        ve[i]=v[i];
    }
    string s;
    cin>>s;
    int N=0;
    int S=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='N') N++;
        else S++;
    }
    int maxi=-1;
    int mini=-1;
    for (int i = n-1; i >=0; i--)
    {
        if(s[i]!=s[0]){
            maxi=i;break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=s[n-1]){
            mini=i;break;
        }
    }
    
    
    if(S==0 || N==0 || N==n||S==n) cout<<-1<<nl;
    else if(is_sorted(all(v))) cout<<0<<nl;
    else if(s[0]=='N' && s[n-1]=='S') cout<<1<<nl;
    else{
        sort(all(v));
        bool prev=true;
        bool next=true;
        for (int i = 0; i < mini; i++)
        {
          if(ve[i]!=v[i]){
              prev=false;
              break;
          }

        }
        for (int i = maxi+1; i < n; i++)
        {
          if(ve[i]!=v[i]){
              next=false;
              break;
          }

        }
        if(prev||next) cout<<1<<nl;
        else cout<<2<<nl;
           
        
        
        
        
    }
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    solve();
}
return 0;
}