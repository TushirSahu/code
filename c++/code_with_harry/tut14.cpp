#include<iostream>
using namespace std;
//**Structures**
typedef struct employee
/*typedef is used for shortcut here to give 
struct employee a shortname---->ts*/
{
    int eId;
    char favchr;
    float salary;
}ts;

union money
{
/*inn teeno me se ek baar me ek hi value
use krega ...agr hoti h toh wo garbage value de dega[union ki baat ho rhi]*/
    int rice;
    char cars;
    float pounds;
};


int main(){
    enum meal{breakfast,lunch,dinner};//enum acts as a datatype
    meal m2=lunch;
    cout<<(m2==2)<<endl;
    // cout<<"M="<<breakfast<<endl;
    // cout<<"M="<<lunch<<endl;
    // cout<<"M="<<dinner<<endl;
    union money m1;
    m1.rice=34;
    m1.cars='c';
    cout<<m1.rice<<endl;
    
     ts tushir;
    struct employee rahul;//ts=struct employee
    tushir.eId=1;
    tushir.favchr='c';
    tushir.salary=12050.5;
    rahul.eId=12;
    cout<<"The value is "<<tushir.eId<<endl;
    cout<<"The value is "<<rahul.eId<<endl;
    cout<<"The value is "<<tushir.favchr<<endl;
    cout<<"The value is "<<tushir.salary<<endl;
    
    

return 0;
}