#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
unordered_set<string> s;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string str;
    cin>>str;
    s.insert(str);
}
int q;
cin>>q;
while(q--){
    string str;
    cin>>str;
    if(s.find(str)==s.end()){//if the value is not present in set it rturns end value
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
}
return 0;
}