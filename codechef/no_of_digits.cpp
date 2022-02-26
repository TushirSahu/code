#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,y,count=0;
cin>>t;
while(t>0){
    count++;
   t= t/10;
   
}

if(count==1){
    cout<<"1"<<endl;
}
else if(count==2){
    cout<<"2"<<endl;
}
else if(count==3) {
    cout<<"3"<<endl;
}
else{
    cout<<"More than 3 digits"<<endl;
}

return 0;
}