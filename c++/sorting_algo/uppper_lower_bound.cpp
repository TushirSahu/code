#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
sort(a,a+n);
int *ptr=lower_bound(a,a+n,5);//in case of vector---> auto it=upper_bound(...)
int *pt=upper_bound(a,a+n,6);
cout<<*ptr<<" "<<*pt<<endl;//vector case:*it will be done
return 0;
}