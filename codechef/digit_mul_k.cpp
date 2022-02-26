#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,count=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]+a[i+1]==*max_element(a,a+n)){
            count++;
            i++;
        }
        else{
            continue;
        }

        
    }
    cout<<count<<endl;
    
}
return 0;
}