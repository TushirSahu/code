#include<bits/stdc++.h>
using namespace std;

int dec(int i){
    if(i==1) return 1;
    cout<<i<<endl;
 return dec(i-1);
}
void asc(int n){
    if(n==1) {
      cout<<"1"<<endl;
      return;
    }
    asc(n-1);
    cout<<n<<endl;

}
int main(){
int n,m;
cin>>n>>m;

cout<<dec(n)<<endl;
asc(m);
return 0;
}