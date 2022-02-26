#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void display(void);
    void one_comp(void);
} bn;

void binary::read(void)
{
    cout << "Enter a number " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Incorrect input";
            exit(0);
        }
    }
}
void binary::display(void)
{
    cout << "\nDisplaying the enter number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
void binary::one_comp(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}
int main()
{
    bn.read();
    bn.chk_bin();
    bn.display();
    bn.one_comp();
    bn.display();
    return 0;
}