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
 
 int n,m,r,c;
    
    cin>>n>>m>>r>>c;
    char s[n+1][m+1];
    int cntb=0;
   // bool flag1=false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='B') cntb++;
        }
 
    }  
    if(cntb==0) {
        cout<<-1<<nl;
        //return;
    }
    else if(s[r][c]=='B'){
         cout<<0<<nl;
         //return;
    }
    else{
       bool flag=false;
        for (int i = 1; i<= n; i++)
        {
            if(s[i][c]=='B')
            flag=true;
        }   
     for (int j= 1; j<= m; j++)
        {
            if(s[r][j]=='B')
            flag=true;
        }
     if(flag) cout<<1<<nl;
      else cout<<2<<nl;
    }
}
return 0;
}