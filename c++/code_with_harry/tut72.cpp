#include<bits/stdc++.h>
using namespace std;
void display(list <int> &l){
    list<int>::iterator it;
    for (it=l.begin();  it!=l.end(); it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
list<int> l1;//list with 0 length
l1.push_back(5);
l1.push_back(7);
l1.push_back(1);
l1.push_back(9);
l1.push_back(11);
//l1.remove(9);//removes all the elements in the list written in brackets
//l1.sort();//sortes the list
// display(l1);
//l1.pop_back();
//l1.pop_front();
//l1.reverse();//reverses teh list 1

display(l1);

// list<int> l2(3);//empty list of size 3
// list<int>:: iterator iter;
// iter=l2.begin();
// *iter=45;
// iter++;
// *iter=6;
// iter++;
// *iter=9;
// iter++;
// display(l2);

// l1.merge(l2);//merges the lsit 2 with list 1
// cout<<"List 1 after merging with list 2 is ";
// display(l1);
return 0;
}
