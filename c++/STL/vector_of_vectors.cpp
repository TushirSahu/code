#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    cout<<"Size of vector:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
vector<vector<int>> v;
for (int i = 0; i <n ; i++)
 {
   int N;
   cin>>N;
   vector<int> temp;
   for (int j = 0; j < N; j++)
   {
       int x;
       cin>>x;
       temp.push_back(x);
   }
   v.push_back(temp);
 }
   for (int i = 0; i < v.size(); i++)
   {
       print(v[i]);
   }
   
   
   


return 0;
}