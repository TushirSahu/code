#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int> v;
for (int i = 0; i <n; i++)
{
    cin>>v[i];
}
int sum=accumulate(v.begin(),v.end(),0);
cout<<sum<<endl;
int count=count(v.begin(),v.end(),3);
cout<<count<<endl;
int ele=*find(v.begin(),v.end(),2);//returns the value only of the find element
return 0;
}