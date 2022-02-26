#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int w,x,y,z,a,b,c,d;
cin>>x>>y>>z;
cin>>a>>b>>c;
w=x+y+z;
d=a+b+c;
if(d<w){
  cout<<"DRAGON"<<endl;
} 

else if(d>w){
    cout<<"SLOTH"<<endl;
}
else{
    if(d==w){
        if(x>a){
            cout<<"DRAGON"<<endl;
        }
        else if(x<a){
            cout<<"SLOTH"<<endl;
        }
        else{
            if(y>b){
                cout<<"DRAGON"<<endl;
            }
            else if(y<b){
                cout<<"SLOTH"<<endl;
            }
            else{
                cout<<"TIE"<<endl;
            }

        }
    }
}
}
return 0;
}