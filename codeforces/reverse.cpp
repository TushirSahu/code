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
    vector<int> v(n);
    
   
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int sr=-1,start=-1,end=-1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=i+1){
            start=i;
            sr=i+1;
            break;
        }       
    }
  if(sr==-1){
      for (int i = 0; i < n; i++)
      {
          cout<<v[i]<<" ";
      }
      
  }
  else{
      for (int i = 0; i < n; i++)
      {
          if(v[i]==sr){
              end=i;
              break;
          }
      }
      reverse(v.begin()+start,v.begin()+end+1);
      for (int i = 0; i < n; i++)
      {
          cout<<v[i]<<" ";
      }
      
  }
  cout<<nl;
   
    
}
return 0;
}