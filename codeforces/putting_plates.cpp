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
    int h,w;
    cin>>h>>w;
    int a[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            a[i][j]=0;
        }
        
    }
    for (int i = 0; i < h; i+=2)
    {
        a[i][0]=1;
        a[i][w-1]=1;
    }
    for (int i = 2; i <= w-3 ; i+=2)
    {
      a[0][i]=1;
      a[h-1][i]=1;
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            /* code */
            cout<<a[i][j];
        }
        cout<<nl;
        
    }
    cout<<nl;
    
    
    
    
}
return 0;
}