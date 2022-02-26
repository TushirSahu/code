#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,r=0,b=0,g=0;
    cin>>n;
    char s[n];
    for (int i = 0; i<n; i++)
    {
        cin>>s[i];
    }
    for (int  i = 0; i < n; i++)
    {
        if(s[i]=='R'){
          r++;
        }
        else if(s[i]=='B'){
            b++;
        }
        else if(s[i]=='G'){
            g++;
        }
    }
    if(r>=b&&r>=g){
        cout<<b+g<<endl;
    }
    else if(g>=b&&g>=r){
        cout<<b+r<<endl;
    }
    else if(b>=r&&b>=g){
        cout<<r+g<<endl;
    }
    
    
    
}
return 0;
}