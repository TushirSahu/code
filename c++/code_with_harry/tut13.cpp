#include<iostream>
using namespace std;

int main(){
    // array examples
int marks[]={23,25,45,89};
marks[3]=455;
int mathmark[4];
mathmark[0]=578;
mathmark[1]=257;
mathmark[2]=378;
mathmark[3]=878;
cout<<"These are the mathmark"<<endl;
cout<<mathmark[0]<<endl;
cout<<mathmark[1]<<endl;

// you can often chnage the value of an array
mathmark[2]=455;
cout<<mathmark[2]<<endl;
cout<<mathmark[3]<<endl;
// cout<<"These are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
// }
// int i=0;
// while (i<4)
// {
//     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;
// }
int i=0;
do
{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;

} while (i<4);
//Pointers and arrays
int *p=marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
// cout<<"The value of marks[0] is "<<*p<<endl;
// cout<<"The value of marks[1] is "<<*(p+1)<<endl;
// cout<<"The value of marks[2] is "<<*(p+2)<<endl;
// cout<<"The value of marks[3] is "<<*(p+3)<<endl;



return 0;
}