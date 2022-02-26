#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,max=0,max_ind=0,max_r=0;
    cin>>n;
    int m[n],r[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>m[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>r[i];
    }
    int y[n];
    for (int  i = 0; i < n; i++)
    {
        y[i]=m[i]*r[i];
    
    }
    for (int i = 0; i < n; i++)
    {
        if(y[i]>max){
            max=y[i];
            max_r=r[i];
            max_ind=i;
        }
        else if(y[i]==max){
            if(r[i]>max_r)
            {
            max_r=r[i];
            max_ind=i;
            }
        }
    } 
    cout<<max_ind+1<<endl;
}
return 0;
}