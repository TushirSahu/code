#include<bits/stdc++.h>
using namespace std;

int main(){
int x=0,y=0;
string s1,s2;
int n;
cin>>n;
string arr[n];

for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
s1=arr[0];
for (int i = 0; i < n; i++)
{
    if(arr[i]!=s1){
        s2=arr[i];
    }
}
for (int i = 0; i < n; i++)
{
    if(arr[i]==s1){
        x++;
    }
    else{
        y++;
    }
}
if(x>y){
    cout<<s1;
}
else{
    cout<<s2;
}

return 0;
}