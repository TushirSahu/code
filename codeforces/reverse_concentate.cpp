#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

bool Pallindrome(string s){
    string p=s;
    reverse(p.begin(),p.end());
    if(s==p){
        return true;
    }
    else{
        return false;
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
//  string s_new=s;

//  reverse(s.begin(),s.end());
// string s1=s_new+s;
// string s2=s+s_new;
if(Pallindrome(s)==true || k==0) cout<<"1\n"; 
else{
  cout<<"2\n";
}
 
 
}
return 0;
}