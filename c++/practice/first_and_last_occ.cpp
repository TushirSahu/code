#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return first_occ(arr,n,i+1,key);
}
int main(){
int n;
cin>>n;
int arr[]={2,4,5,6,7,8};
cout<<first_occ(arr,6,0,n);
return 0;
}