#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int r1,r2,r3,g1,g2,g3,b1,b2,b3;
    cin>>r1>>r2>>r3>>g1>>g2>>g3>>b1>>b2>>b3;
    int sum1=g1+b1+b2;
    int sum2=r2+g3+r3;
    if(sum1>sum2){
        cout<<sum1<<endl;
    }
    else{
        cout<<sum2<<endl;
    }
}
return 0;
}