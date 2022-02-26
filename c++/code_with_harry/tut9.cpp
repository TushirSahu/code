#include<iostream>

using namespace std;
int main(){
    int age;

    //****Selection if else if ladder tool
    // int age;
    // // cout<<"This is tutorial 9";
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if((age<18) && (age>0)){

    //     cout<<"You cannot come to my party"<<endl;
    
    // }
    // else if(age<1){

    //     cout<<"You are not yet born"<<endl;
    // }
    // else if(age==18){
    // cout<<"You are the kid and you will get a kid in the party"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;



    // }
    //switch case statement
    cin>>age;
    switch (age)

    {
    case 18:
    cout<<"You are 18"<<endl;


        /* code */
         break;

     

    case 22:
    cout<<"You are 22"<<endl;

         break;

    case 2:
    cout<<"You are 2"<<endl;

         break;
    
    default:
    cout<<"No special cases"<<endl;

        break; 
    }
    cout<<"done with switch case";





    return 0;
}
