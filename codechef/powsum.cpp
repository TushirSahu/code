#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int mini=arr[0];
    int sum=0,ind=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(mini>arr[i]){
            mini=arr[i];
            ind=i;
            }
    }
    int power=log2(sum);
    int diff=pow(2,power+1)-sum;
    if(sum==pow(2,power)){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
        cout<<"1"<<" "<<diff/mini+1<<endl;
        cout<<ind+1<<endl;
    }
    
}
return 0;
}