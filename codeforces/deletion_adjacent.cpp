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
    char c;
   
    cin>>s>>c;
     int n=s.length();
    
    
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==c && i%2==0){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
        
    
}
return 0;
}