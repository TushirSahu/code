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
    int n,x;
    cin>>n>>x;
    vector<pair<int,int> >a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back({x,1});
    }
    vector<int> v;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i].first%x==0){
           // for (int j = 0; j < x; j++)
            
                a.push_back({a[i].first/x,x*a[i].second});
        }
            
            else break;
        
    }
    ll sum=0;
//    for (int i = 0; i < a.size(); i++)
//    {
//        /* code */
//        cout<<a[i].first<<" "<<a[i].second<<nl;
//    }
  
//    // cout<<nl;
    for (int i = 0; i < a.size(); i++)
    {
         sum+=(a[i].first*a[i].second);

    }
    cout<<sum<<nl;
    

    
}
return 0;
}