#include<iostream>
using namespace std;

int main(){
    // * :pointers in c++-->a data type which holds address of data type

    // &---->address of operator
    
    int a=3;
int* b=&a;
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<b<<endl;
// *---->(value at operator)deference operator
cout<<"The value of address of a is "<<*b<<endl;
// pointer to pointer
int**c=&b;
cout<<"The address of b is "<<c<<endl;
cout<<"The value of address at c is "<<&b<<endl;
cout<<"The value of  address value_at (address(c)) is "<<**c<<endl;

return 0;
}