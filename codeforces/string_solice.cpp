#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void Checkstring(string s){
    int cntb=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='B') cntb++;
    }
    if(cntb*2==s.size())cout<<"YES\n";
    else cout<<"NO\n";
     
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
Checkstring(s);
}
return 0;
}