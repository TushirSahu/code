#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    int c=0;
    cin>>s;
    bool flag=false;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i-1]>s[i]){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
    
}
return 0;
}