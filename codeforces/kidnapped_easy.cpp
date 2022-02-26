#include<bits/stdc++.h>
using namespace std;

long long int fact(int n){
    const int m=1000000007;
   long long ans=1;
    while(n>=1)
    {
        ans=(ans*n)%m;
        n--;
    }
    return ans;
}

int main(){
int n;
cin>>n;
cout<<fact(n);
return 0;
}