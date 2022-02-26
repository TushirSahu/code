#include<iostream>
using namespace std;


class Complex{
   int a,b;
   public:
   void setnumber(int v1,int v2){
       a=v1;
       b=v2;
   }
   friend Complex sumofcomplex(Complex o1,Complex o2);//class ke andr hi bnana
   void printnumber(){
       cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
   }
};
Complex sumofcomplex(Complex o1,Complex o2){
    Complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
Complex c1,c2,sum;
c1.setnumber(1,4);
c2.setnumber(5,8);
c1.printnumber();
c2.printnumber();
sum=sumofcomplex(c1,c2);
sum.printnumber();
return 0;
}

/*Properties of friend functions:
1:Not in the scope of class(not a part of class just permission is given)
2:Since it is not in the scope of class ,it cannot be called from the objectof that class
c1.sumofcomplex gives error
3:Can be invoked without the help of object
4:Usually contains object as arguments
5:Can be declared in public or private part of class as well
6:It cannnot access the member directly by their names and need_oblect.member_name
to access any member