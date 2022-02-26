#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void solve(){
       int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0,countT=0,countM=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='T') {
            ans++;
            countT++;
        }
        else{
            ans--;
             countM++;
        }
    
     if(ans<0) {
        cout<<"NO\n";
        return;
        }
    }
    ans=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i]=='T') ans++;
        else ans--;
        if(ans<0) {
            cout<<"NO\n"; 
            return;
        }
    }
    if(countT==2*countM) cout<<"YES\n";
    else cout<<"NO\n";
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