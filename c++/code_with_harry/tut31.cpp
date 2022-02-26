#include<bits/stdc++.h>
using namespace std;
//Constructors overloading
class Complex{
    int a,b;
    public:
    Complex(){//default constructor
        a=2;
        b=4;
    }
    Complex(int x,int y){//parameterized constructor
        a=x;
        b=y;
    }
    Complex(int x){
        a=x;
        b=4;
    }
    void printnumber(){
        cout<<"Yuour number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
int main(){
Complex c1(4,5);
c1.printnumber();
Complex c2(5);
c2.printnumber();
Complex c3;
c3.printnumber();
return 0;
}