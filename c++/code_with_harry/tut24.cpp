#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and the employee number is " << count << endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count; //Default value os 0 as it is static
int main()
{
    Employee tushir, raghav, pankaj;
    //count is the static data member of class Employee
    tushir.setData();
    tushir.getData();
    Employee::getCount();

    raghav.setData();
    raghav.getData();
    Employee::getCount();

    pankaj.setData();
    pankaj.getData();
    Employee::getCount();
    return 0;
}