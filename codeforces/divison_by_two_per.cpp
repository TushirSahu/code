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
    set<int> s;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x<=n && s.find(x)==s.end()){
            s.insert(x);
        }
        else{
            while(x>0){
                if(x<=n && s.find(x)==s.end()){
                    break;
                }
                x=x/2;
            }
            if(x!=0){
                s.insert(x); 
            }           
        }
    }
    if(s.size()==n) cout<<"YES\n";
    else cout<<"NO\n";

}
    return 0;
}