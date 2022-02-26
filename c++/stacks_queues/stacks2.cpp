#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
map<char,int> symbols={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string solve(string s){
    stack<char> st;
  for(char brackets:s){
    if(symbols[brackets]<0){
        st.push(brackets);
    }
    else{
    if(st.empty()) return "NO";
        char top=st.top();
        st.pop();
        if(symbols[top]+symbols[brackets]!=0) return "NO";
    }
  }
  if(st.empty()) return "YES";
  return "NO";

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
}
return 0;
}