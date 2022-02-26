#include<bits/stdc++.h>
using namespace std;
const int m=1e7+10;
int hsh[m];
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    hsh[a[i]]++;
}
int q;
cin>>q;
while(q--){
int x;
cin>>x;          
cout<<hsh[x]<<endl;
}
return 0;
}