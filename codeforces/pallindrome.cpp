#include<bits/stdc++.h>
using namespace std;

int main(){
char a[20];
int flag=0;
cin>>a;
int x=strlen(a);

for (int i = 0; i <x; i++)
{
    if(a[i]==a[x-i-1]){
        flag=1;
        break;
    } 
    
}
if(flag==1){
cout<<"Entered string is Pallindrome";
}
else{
    cout<<"Entered string is not pallindrome";
}



return 0;
}