#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int n;
// cin>>n;
//map<string,int> m;
// for (int i = 0; i < n; i++)
// {
//     string s;
//     cin>>s;
//     m[s]++;
// }
// for(auto p:m){
//     cout<<p.first<<" "<<p.second<<endl;
// }
int n;
cin>>n;
unordered_map<string,int> m1;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m1[s]++;
}
for(auto p1:m1){
    cout<<p1.first<<" "<<p1.second<<endl;
}
return 0;
}