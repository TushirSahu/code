#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,c=0;
    string s;
    cin>>s;
    n=s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='x'&& s[i+1]=='y'|| s[i]=='y'&& s[i+1]=='x'){
            i++;
            c++;
        }
    }
    cout<<c<<endl;
    
}
return 0;
}