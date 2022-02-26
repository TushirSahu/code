#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

void print(set<string> &s){
    for (string value:s)
    {
        cout<<value<<endl;
    }
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

set<string> s;
s.insert("abc");
s.insert("abc");
s.insert("acb");
s.insert("dfc");//sets always prints in sorted order
s.erase("abc");//removes function from the sets
auto it=s.find("abc");
print(s);
return 0;
}