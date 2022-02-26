#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k,v;
    cin>>n>>k>>v;
    vector<int> a(n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int  res=v*(n+k)-sum;
    if(res<=0||res%k!=0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<res/k<<endl;
    }
    
}
return 0;
}