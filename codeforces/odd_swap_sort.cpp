#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
void sol(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        if(v[i]%2==0){
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    for (int i = 1; i < even.size(); i++)
    {
        if(even[i-1]>even[i]){
         cout<<"NO\n"; 
        return;
        }
    }
    for (int i = 1; i < odd.size(); i++)
    {
        if(odd[i-1]>odd[i]) {
        cout<<"NO\n"; 
        return;
        }
    }
    cout<<"YES\n";
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    
    sol();
}
return 0;
}