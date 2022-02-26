#include<bits/stdc++.h>
using namespace std;
//checking whether the given array is sorted or not
bool arrange(int arr[],int n){
    if(n==1) return true;
    bool result= arrange(arr+1, n-1);
    return (arr[0]<arr[1]&& result);
}
int main(){
int arr[]={1,4,2,3,5,6};
cout<<arrange(arr,6)<<endl;

return 0;
}