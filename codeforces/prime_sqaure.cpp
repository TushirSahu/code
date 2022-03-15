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
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if(i==j){
                 a[i][j]=1;  
            }
            else{    
                a[i][j]=0;
            }
           
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j>= 0; j--)
        {       if(i+j==n-1){
                a[i][j]=1;
                   }
        }
        
    }
    //a[0][3]=1;
    if(n%2==0){
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j< n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<nl;
        }
        cout<<nl;
        
    }
    else{
      a[n/2][(n+1)/2]=1;
      a[n/2-1][n/2]=1;
      //a[(n+1)/2][(n+1)/2+1]=1;

         for (int i = 0; i < n; i++)
        {
            for (int j = 0; j< n; j++){
             cout<<a[i][j]<<" ";
          }
          cout<<nl;
        }
        cout<<nl;
    
}
}
return 0;
}