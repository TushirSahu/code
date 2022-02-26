#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
//constructor is a special member function with same name as the class
//it is used to intialize the objects of its class.Whenever an object is created it is automatically invoked(called).
   public:
   Complex(void);//declaring constructor
   void printdata(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};

Complex::Complex(void){//--->Default constructors accepts no parameter
    cin>>a;
    cin>>b;
}
int main(){
Complex c;
c.printdata();
return 0;
}
/*properties of constructors:
1.It should be declared in public class.
2.They are invoked whenever an object is created.
3.They cannot return values and do not have return types.
4.It can have default arguments.
5.we cannot referred to the address.

