#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long int n;
    
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
    if(a[i]==a[i+1]){
       i++;
    }
    else{
        cout<<a[i]<<endl;
    }
    }
    



}
return 0;
}