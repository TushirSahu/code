#include<iostream>
using namespace std;

class C2;
class C1{
    int val;
    public:
    int indata(int a){
        val=a;
    }
    void display(void){
        cout<< val <<endl;
    }
    friend void exchange(C1 &,C2 &);
};
class C2{
    int val2;
    public:
    int indata(int a){
        val2=a;
    }
    void display(void){
        cout<<val2<<endl;
    }
    
    friend void exchange(C1 &,C2 &);
};

void exchange(C1 &x,C2 &y){
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main(){
C1.oc1;
C2.oc2;
oc1.indata(34);
oc2.indata(67);
exchange(oc1,oc2);
cout<<"The value after exchanging becomes ";
oc1.display();
cout<<"The value after exchanging becomes ";
oc2.display();
return 0;
}