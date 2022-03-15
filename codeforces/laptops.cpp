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

    vector<pair<int,int>> v(t);
    map<int,int> m;
    for (int i = 0; i < t; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(all(v));
    bool flag=false;
    for (int i = 0; i < t-1; i++)
    {
        if(v[i].second>v[i+1].second) {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
    
    

return 0;
}