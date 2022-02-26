#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int calMax(vector<int> a){
    int res=0;
    for (auto i: a)
    {
        res=max(res,i);
    }
    return res;
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector <int> a(n),b(n);
    for(auto &value: a ){
      cin>>value;
    }
    for(auto &value: b ){
      cin>>value;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>b[i]){
            swap(a[i],b[i]);
        }
    }
    cout<<calMax(a)*calMax(b)<<"\n";
    
    
    
}
return 0;
}