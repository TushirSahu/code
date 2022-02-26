#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k,x;
    cin>>x>>n>>k;
    if(k>=x)
 {
   cout<<"-1"<<endl;
 }   
 else{
     int b=0;
     for (int i = 0; i <x; i++)
     {
         if(b==k){
             b=1;    
         } 
        cout<<b<<" ";
        b++;    
     }
 } 
 cout<<endl;
}
return 0;
}