#include<iostream>
using namespace std;
void max_of_numbers(int a,int b,int c,int d){
    if (a>b&&a>c&&a>d)
    {
       cout<<a;
    }
    else if (b>a&&b>c&&b>d)
    {
        cout<<b;
    }
    else if (c>a&&c>b&&c>d)
    {
        cout<<c;
    }
    else{
        cout<<d;
    }

    
}
int main(){
    int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<"The greatest numer is ";
  max_of_numbers(a,b,c,d);
return 0;
} 