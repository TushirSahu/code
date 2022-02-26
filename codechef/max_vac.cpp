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
    int n,count1=0,x;
    cin>>n>>x;
    string s;
    cin>>s;
    for (int  i = 0; i <n; i++)
    {
       if(s.at(i)=='1')
       {
            count1 ++;
       }
       else{
           continue;
       }
    }
     //cout<<count1<<"\n";  
      if(count1<x){
        cout<<(n-1)/x<<endl;
    }
    else if(count1==x){
        cout<<(n-count1+1)/x<<endl;
    }
    else {
        cout<<"1"<<endl;
    }
}   
return 0;
}