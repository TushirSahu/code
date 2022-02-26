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
    int x;
    for (int k = 2; k <= 35; k++)
    {
        int den=pow(2,k)-1;
        if(n%den!=0){
            continue;
        }
        else{
            x=n/den;
            break;
        }
    }
    cout<<x<<endl;
    
}
return 0;
}