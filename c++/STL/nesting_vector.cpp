#include<bits/stdc++.h>
using namespace std;

void display(vector<pair<int,int>> &v){
    for (size_t i = 0; i< v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}
int main(){
vector<pair<int,int>> v;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
}
display(v);
return 0;
}