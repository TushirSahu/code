#include<iostream>
using namespace std;
class animals{
    private:
    char a,b,c;
    public:
    int d,e;
    void setdatatype(char a1,char b1,char c1);
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void animals::setdatatype(char a1,char b1,char c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
 animals zoo;
 zoo.d=2;
 zoo.e=4;
zoo.setdatatype('r','n','a');
zoo.getdata();
return 0;
}