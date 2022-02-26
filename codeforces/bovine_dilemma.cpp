#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(auto &p:v){
        cin>>p;
    }
    set <int> S;
    for (int i = 0; i <n; i++)
    {
        for (int j= i+1; j< n; j++)
        {
           S.insert(abs(v[j]-v[i]));
        }

    }
    cout<<S.size()<<"\n";    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    solve();
}
return 0;
}