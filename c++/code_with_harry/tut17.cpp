#include<iostream>
using namespace std;
//  int product(int a,int b){
    //not recommended to use below lines with inlines
    // static int c=0;//this excutes only once
    // c=c+1;//next time this function will run,then the value of c will be retained
    //will take updated value

    ///return a*b+c;
//}

float moneyRecieved(int currentmoney,float factor=1.04){

    return currentmoney * factor;
}
int main(){
    int a,b;
//  cout<<"Enter the value of a and b "<<endl;
//  cin>>a>>b;
 int money=100000;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
 cout<<"If you have "<<money<<" Rs in your account,you will receive "<<moneyRecieved(money,1.1)<<" Rs after 1 year";
return 0;

}