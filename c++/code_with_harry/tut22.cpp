//OOPs-->Classes and objects
//C++--->initially called C with classes
//classes--->extension of structure(in C)
//structure had limitations
//      -memebers public
//      -No Methods
//classes=structure + more
//classes-->can have methods and properties
//classes-->can make few members as public and few as private
//Structure in C++ are typedef
//you can declare objects along with the class declaration like this
/*    class name{
//        //class definition
   }Tushir,Rohan,Harry;*/

//Nesting of member function
#include <iostream>
#include <string>
using namespace std;
class binary
{ //private:   by default class members are private
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary input" << endl;
            exit(0);
        }
    }
}
void binary::ones(void)
{
    //chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) = '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying the binary function " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout <<s.at(i);
        
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}
