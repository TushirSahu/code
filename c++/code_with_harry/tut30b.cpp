#include<bits/stdc++.h>
using namespace std;

class Point{
    int x,y;
    public:
    Point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }

};
int main(){
    Point p(1,1);
    Point q(4,6);
    p.displaypoint();
    q.displaypoint();

return 0;
}