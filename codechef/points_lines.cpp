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
    int n;
    cin>>n;
    set<int> s1;
    set<int> s2;
    for (int i = 0; i <n; i++)
    {  
        ll a,b;
        cin>>a>>b;
        s1.insert(a);
        s2.insert(b);
    }
    cout<<s1.size()+s2.size()<<"\n";
    
}
return 0;
}