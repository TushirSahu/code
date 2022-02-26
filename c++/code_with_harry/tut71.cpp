#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";//gives the vector at a specified value
    }
    cout<<endl;
    
}
int main(){
vector<int> v;
vector<int> t(3,63);//(no of times ,int)
print(t);
int n,size;
cout<<"Enter the size of the vector ";
cin>> size;
for (int i = 0; i < size; i++)
{
  cin>>n;
  v.push_back(n);
}
v.pop_back();
vector<int>:: iterator iter=v.begin();
print(v);
v.insert(iter,566);
v.insert(iter+1,1);//can be inserted by adding in iter
//v.insert(iter+1,5,66);//no of copies that we need like in this 5
print(v);

return 0;
}