#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
unordered_map<int,string> m;
m[0]="O-|-OOOO";
m[1]="O-|O-OOO";
m[2]="O-|OO-OO";
m[3]="O-|OOO-O";
m[4]="O-|OOOO-";
m[5]="-O|-OOOO";
m[6]="-O|O-OOO";
m[7]="-O|OO-OO";
m[8]="-O|OOO-O";
m[9]="-O|OOOO-";
if(n==0) cout<<m[0]<<nl;
else{
while(n>0){
    int temp=n%10;
    cout<<m[temp]<<nl; 
 
    n/=10;
}
}

// for (int i = 0; i < v.size(); i++)
// {
//     if(v[i]<5)
// }




return 0;
}