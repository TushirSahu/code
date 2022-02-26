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
    int a[3],b[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>b[i];
    }
    cout<<b[0]<<" "<<b[1]<<" "<<b[6]-b[0]-b[1]<<"\n";
}
return 0;
}