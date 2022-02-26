#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s[n],b;
    for (int i = 0; i < n; i++)
    {
      cin>>s[i];
    }
    int count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==s[0]){
            count1++;
        }
        else{
            count2++;
            b=s[i];
        }
    }
    if(count1>count2){
        cout<<s[0]<<"\n";
    }
    else if(count1<count2){
        cout<<b<<"\n";
    }
    else if(count1==count2){
        cout<<"Draw\n";
    }    
    else{
        cout<<"invalid entry\n";
    }
}
return 0;
}