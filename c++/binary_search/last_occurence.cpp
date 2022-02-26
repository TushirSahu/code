#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
int Binary(int a[],int n,int ele){
    int start=0,end=n-1;
    int res=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(ele==a[mid]){
             res=mid;
             start=mid+1;
        }
        else if(ele<a[mid]) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }

    return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[]={1,2,3,5,5,6};
int n=sizeof(a)/sizeof(a[0]);
cout<<Binary(a,n,5)<<nl;
}