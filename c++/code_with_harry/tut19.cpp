#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}
int volume(int a,int b,int c){
    return (a*b*c);

}
int volume(int a){
    return (a*a*a);
}
int main(){
cout<<"The sum of 3 and 6 is "<<endl<<sum(3,6)<<endl;
cout<<"The sum of 3,7 and 6 is "<<endl<<sum(3,7,6)<<endl;
cout<<"The volume cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
cout<<"The volume cube of 3 is "<<volume(3)<<endl;
return 0;
}