#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k,sum=0;
    cin>>n>>k;
    int a[n];
    int nw=0;
    for (int i = 0; i < n; i++)
     {  
        cin>>a[i];
        sum=sum+a[i];
     }
    for (int i = 0; i < k; i++)
     {
        nw=sum+1;
        sum=sum+nw;
     }
     
    if(nw%2==0){
         cout<<"even"<<endl;
    }
    else
    {
         cout<<"odd"<<endl;
    }
     
    
}
return 0;
}