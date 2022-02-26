#include<bits/stdc++.h>
using namespace std;
void vectrprint(vector<int> v){
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    
}
int main(){
vector<int> v;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);//adds the value x from the back in the vector
    //v.pop_back();//removes the value x from the back in the vector
}
vector<int> v2=v;//creates a copy of v vector
v2.push_back(7);
vectrprint(v);//does not have any effect of the pushback as it is a copy
vectrprint(v2);
return 0;
}