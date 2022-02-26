#include<iostream>
using namespace std;
//function and function prototype
int sum(int a,int b);//<---acceptable
//int sum(int a,b);//<----not acceptable
//int sum(int,int);//<----Acceptable
void g();
int main(){
    int num1,num2;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;

    //num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);/*return c mtlb c ki value seedhe 
    iss wale sum me aayegi upar se*/
    g();
return 0;
}
int sum(int a,int b){
    //formal parameters a and b will be taking value from actual parameter num1 and num2
    int c=a+b;
    return c;
}
void g(){
    cout<<endl<<"Hello,Good Morning";
}