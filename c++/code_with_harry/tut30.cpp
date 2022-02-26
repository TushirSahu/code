#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;

   public:
   Complex(int,int);
   void printdata(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};
Complex::Complex(int x,int y){//--->parametrized constructors as it takes two parameter
    a=x;
    b=y;
}
int main(){
    //Implicit call
Complex a(4,6);
a.printdata();
//Explicit call
Complex b=Complex(5,7);
b.printdata();
return 0;
}