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
    vector<int> v(n);
      vector<int> t;
        vector<int> te;
     int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]%2==1){
            odd++;
               t.push_back(v[i]);
           }
           else te.push_back(v[i]);
    }
    // if((t.size()==1 && te.size()==0)|| (t.size()==1 && te.size()>0)) cout<<-1<<nl;
    if(odd>1 && odd%2==0) {
        for(auto i:t) cout<<i<<" ";
        for(auto i:te) cout<<i<<" ";
        cout<<nl;
    }
    else if(odd>1 && n-odd>=1) {
        for(int i=0;i<odd-1;i++){
            cout<<t[i]<<" ";
        }
        for(auto i:te) cout<<i<<" ";
        cout<<t[odd-1];
        cout<<nl;
    }
    else{
       cout<<-1<<nl;
        //    for (int i = 0; i < n; i++)
        //  {
        //      if(find(t.begin(),t.end(),v[i])==t.end() && v[i]%2==0) t.push_back(v[i]);
        //  }

        //  for (int i = 0; i < n; i++)
        //  {
        //     if(find(t.begin(),t.end(),v[i])==t.end() && v[i]%2==1) t.push_back(v[i]);
        //  }
          
        // }
        
        // else{
        // // for (int i = 0; i < n; i++)
        // // {
        // //  if(find(t.begin(),t.end(),v[i])==t.end() && v[i]%2==0) t.push_back(v[i]);
        // // }
        // //  for (int i = 0; i < n; i++)
        // // {
        // //  if(find(t.begin(),t.end(),v[i])==t.end() && v[i]%2==1) t.push_back(v[i]);
        // // }
        // // }
        
        // for(auto i:te) cout<<i<<" ";
        // for(auto i:t) cout<<i<<" ";
        
        // cout<<nl;
        // }
    }

    
}
return 0;
}