#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    //bool flag=false;
    map<int,int> m;
    map<int,int> me;
   // vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    //sort(a,a+n);
    for ( auto i = 0; i < n; i++)
 {
    if(m[a[i]]==1)
    {
      me[a[i]]=i+1;
    }
 }
 if(me.size()!=0) {
    //  for (auto it = me.begin(); it != me.end(); it++)
    //  {
             
    //  }
     cout<<me.begin()->second<<nl;
 }
 else cout<<-1<<nl;
    
}
return 0;
}