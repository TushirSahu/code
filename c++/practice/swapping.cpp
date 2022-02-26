#include<iostream>
using namespace std;
void swapReferenceVar(int &a,int &b){
           //temp a b
int temp=a;//1    1 5
a=b;       //1    5 5
b=temp;    //1    5 1


} 
int main(){
    int a=1,b=5;
    int c= 234;
cout<<"Enter a number "<<endl<<a<<c<<b<<endl;
swapReferenceVar(a,b);
cout<<a<<c<<b;
return 0;
}