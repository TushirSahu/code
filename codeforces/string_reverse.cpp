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
    string s;
    cin>>s;
    string temp=s;
    ll n=s.length();
    //reverse(s.begin(),s.end());
    ll count=0;
    //set<char> st;
    for (int i = n-1,j=0; i >= 0 && j<n;){
        if(s[j]!=s[i]) {
            count++;
            j++;
            }
        else {
                i--;
                j++;
            }
    }
    
    cout<<count<<nl;
}
   
   //else cout<<n-1<<nl;
return 0;
}