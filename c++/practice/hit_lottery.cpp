#include<bits/stdc++.h>
using namespace std;

int main(){
int n,ans=0, arr[5]={100,20,10,5,1};
cin>>n;
for (int i = 0; i<5; i++)
{
    ans+=n/arr[i];
    n=n%arr[i];

}
cout<<ans;
return 0;
}