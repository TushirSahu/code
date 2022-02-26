#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int ,string> p;
//p=make_pair(1,"Tushir");  //can be declared using both methods
p={1,"Tushir"};
pair<int ,string> &p1=p;//call by value
p1.first=3;
cout<<p.first<<"\n"<<p.second<<endl;
int a[]={1,2,3};
int b[]={2,3,4};
pair<int,int> p_arr[3];
p_arr[0]={1,2};
p_arr[1]={2,3};
p_arr[2]={3,4};

for (int i = 0; i < 3; i++)
{
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<"\n";
}


return 0;
}