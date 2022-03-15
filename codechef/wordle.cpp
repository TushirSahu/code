#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s,p;
    cin>>s>>p;
    string x="";
    for (int i = 0; i < 5; i++)
    {
        if(s[i]==p[i]) x+="G";
        else x+="B";
    }
    cout<<x<<nl;

}
return 0;
}