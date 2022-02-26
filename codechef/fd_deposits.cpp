#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n,y;
    cin>>n>>y;
    bool flag=false;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<>());
    int sum=0;
    int i;
    for  (i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(sum>=y){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<i+1<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}

return 0;
}