#include<iostream>
using namespace std;

int main(){
int n,ans=0, arr[6]={100,50,20,10,5,1};
cin>>n;
for (int i = 0; i<5; i++)
{
     ans=ans+n/arr[i];
    n=n%arr[i];

}
cout<<(int)ans;


return 0;
}