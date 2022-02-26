#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int> v={2,43,5,6,5};
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
vector<int>::iterator it;
for (it= v.begin(); it!= v.end(); it++)
{
    cout<<(*it)<<" ";
}
//vector<int>::iterator it;
cout<<endl;
for (auto it= v.begin(); it!= v.end(); it++)//short cut for writting iterators in c ++
{
    cout<<(*it)<<" ";
}
cout<<endl;
for (auto value :v)//if &value is written then value changes everywhere after this loop
{ value++;//passes value by reference that is a copy not by value
    //cout<<value<<" ";
}

for (auto value :v)//above for loop can written like this also
{  
    cout<<value<<" ";//passes value by reference that is a copy not by value
}
cout<<endl;
vector<pair<int,int>> v_p={{1,2},{3,4}};
for (pair<int,int> &value :v_p)
{ 
    cout<<value.first<<" "<<value.second<<endl;
}
return 0;
}