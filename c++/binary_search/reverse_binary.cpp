#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
int Binary(int a[],int n,int ele){
    int start=0,end=n-1;
while(start<=end){
        int mid=(start+end)/2;
        if(ele==a[mid]){
             return mid;
        }
        else if(ele<a[mid]) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return -1;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[]={6,5,4,3,2,1};
int n=sizeof(a)/sizeof(a[0]);
cout<<Binary(a,n,6)<<nl;
return 0;
}