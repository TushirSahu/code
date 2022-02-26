#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    int b=0,m=0;
    cin>>s;
    for (int  i = 0; i < s.length(); i++)
    {
        if(s[i]=='('){
            b++;
        }
        else{
            b--;
        }
        m=max(b,m);
    }
    for (int i = 0; i < m; i++)
    {
        cout<<"(";
    }
    for (int i = 0; i < m; i++)
    {
        cout<<")";
    }
    cout<<endl;
    
       

}
return 0;
}