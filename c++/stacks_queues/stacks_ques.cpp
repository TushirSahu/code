#include<bits/stdc++.h>
using namespace std;

map<char,int> symbols={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isBalanced(string s){
 stack<char> st;
 for(auto brackets: s){
     if(symbols[brackets]<0){
         st.push(brackets);
     }
     else{
         if(st.empty()) return "NO";
         char top=st.top();
         st.pop();
         if(symbols[top]+symbols[brackets]!=0){
             return "NO";
            }
        } 
    }
    if(st.empty()) return "YES";
    return "NO";
}
typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >>t;
while(t--){
  string s;
  cin>>s;
  cout<<isBalanced(s)<<endl;
}
return 0;
}