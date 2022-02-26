#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
 while(t--){
     int n,k,u=0,l=0;
     string s;
     cin>>n>>k;
     cin>>s;
     for (int i = 0; i < n; i++)
     {
         if(isupper(s[i])){
             u++;
         }
         else{
             l++;
         }
     }
     if(k>=u && l>k){
         cout<<"chef"<<endl;
     }
     else if(k>=l && u>k){
         cout<<"brother"<<endl;
     }
     else if(k>=l && u<=k){
         cout<<"both"<<endl;
     }
     else{
         cout<<"none"<<endl;
     }
     
     
 }
return 0;
}