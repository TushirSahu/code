#include<iostream>
using namespace std;
int sum(int a,int b){
    
    int c=a+b;
    return c;
}
//This will not swap the the value a and b
void swap(int a,int b){//temp a b
    int temp=a;        //4    4 5
    a=b;               //4    5 5
    b=temp;            //4    5 4
}
//Call by refernce using pointers
void swapPointer(int*a,int*b){
    int temp=*a;        
    *a=*b;               
    *b=temp;            
}
//Call by refernce using C++ reference variables
void swapReferenceVar(int &a,int &b){
    int temp=a;        
    a=b;               
    b=temp;           
}
int main(){
    int a=4,b=5;
// cout<<"The sum of 4 and 5 is "<<sum(4,5);
cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
// swap(a,b);this will not swap the values
 //swapPointer(&a,&b);this will swap the values
 swapReferenceVar(a,b);//This is will swap the value using reference varibles
cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
return 0;
}