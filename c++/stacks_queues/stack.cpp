#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<int> s;
s.push(2);
s.push(24);
s.push(22);
s.push(21);
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
return 0;
}