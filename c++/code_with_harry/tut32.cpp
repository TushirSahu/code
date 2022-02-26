#include<bits/stdc++.h>
using namespace std;
class Simple{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a,int b=9,int c=3){//gives default value to b and c.If not mention in main it takes these values
        data1=a;
        data2=b;
        data3=c;
    } 
    void printnumber(){
        cout<<"The value of data is "<<data1<<","<<data2<<" and "<<data3<<endl;
    }
};
int main(){
Simple s1(1,4);
Simple s2(1);
s1.printnumber();
s2.printnumber();
return 0;
}