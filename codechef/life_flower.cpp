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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool flag=false;
    int height=1;
    if(a[0]==1) height++;
    for (int i = 1; i < n; i++)
    {
        if(a[i]==0) {
            if(a[i]==a[i-1]){
            flag=true;
            break;
            }
        }
        else {
            if(a[i]==a[i-1]) height+=5;
            else height++;
        }
    }
    if(flag) cout<<-1<<nl;
    else{
        cout<<height<<nl;

    }
    
}
return 0;
}