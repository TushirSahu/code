#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
int x=max((3*a)/10,a-(a*c)/250);
int y=max((3*b)/10,b-(b*d)/250);
if(x>y){
    cout<<"Wacky";
}
else if(x<y){
       cout<<"Gami";
}
else{
    cout<<"Tie";
}
return 0;
}