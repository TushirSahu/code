#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int c=0,n;
    n=s.length();
    if(n==2){
        if(s[0]==s[1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
      for (int i = 0; i < n; i++)
      {
        if(s[i]==s[i+2] && s[i]!=s[i+1] ){
          c++;
         }    
      }
     if(c==n-2){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    }
    

}
return 0;
}