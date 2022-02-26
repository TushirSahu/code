#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
bool flag=true;
for (int i = 0; i < n; i++)
{
cin>>a[i];
}
int t=a[t-1]-a[0];
for (int i = 0; i < n; i++)
{
    if(a[i+1]-a[i]>0 && a[i+1]-a[i]<t){
        t=a[i+1]-a[i];
        cout<<i+1<<" "<<i<<endl;
    }
    else if(a[i+1]-a[i]<0){
        int y=(a[i+1]-a[i])*(-1);
        if(y<t){
            t=y;
            cout<<i+1<<" "<<i<<endl;
        }
    }
    else{
        cout<<t<<" "<<"1"<<endl;
    }
}


return 0;
}