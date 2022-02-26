#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
queue<string>q;
q.push("abc");
q.push("abd");
q.push("abw");
q.push("aby");
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}
return 0;
}